#include<stdio.h>
#include<stdlib.h>
#include <pthread.h> 
pthread_mutex_t count_mutex; 
  int count; 

void increment_count(void *tid) 
   { printf("incrementing the count by thread%d \n",(int )tid);
     pthread_mutex_lock(&count_mutex); 
     count = count + 1;
     pthread_mutex_unlock(&count_mutex); 
    pthread_exit(NULL);
   }   


void  get_count(void *tid)  
   {   int c;
     printf("printing count thread %d\n",(int )tid);
     pthread_mutex_lock(&count_mutex); 
     c = count; 
     pthread_mutex_unlock(&count_mutex);
     printf("count=%d\n",c);
     pthread_exit(NULL);
    }

int main(){
   int t[2]={1,2};
   int rc;
   pthread_t td[2];
   rc=pthread_create(&td[0],NULL,(void *)increment_count,(void*)t[0]);
    if (rc){
       printf("ERROR; return code from pthread_create1 () is %d\n", rc);
       exit(-1);
       }
  rc= pthread_create(&td[1],NULL,(void *)get_count,(void*)t[1]);
     if (rc){
       printf("ERROR; return code from pthread_create2 () is %d\n", rc);
       exit(-1);
       }
 rc = pthread_join(td[0],NULL);
rc = pthread_join(td[1],NULL);
 printf("\nmain count=%d",count);
 pthread_exit(NULL);
 return 0;
}
