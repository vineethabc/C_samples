#include <stdio.h>
#include <pthread.h>

#define NUM 5

pthread_mutex_t mutex;
pthread_cond_t cond;

void* thread_f(void* par){
        int id = (int) par;    
        
    /*sleep waiting for the cond variable*/
    pthread_cond_wait(&cond,&mutex);/*once it got the condition signal it will get the lock automatically lock the mutex till it is  // unlocking by itself.*/

    /*wake the next thread*/
    pthread_mutex_unlock(&mutex);
    pthread_cond_signal(&cond);

        printf("Thread %d starting to work!\n",id);
        return NULL;
}

int main(){
        pthread_t threads[NUM];
        int i;
    
    /*initialize mutex and cond variable*/
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond,NULL);

        for (i=0;i<NUM;i++){
                pthread_create(&threads[i],NULL,thread_f,(void *)i);
        }

        printf("Everyone wait...\n");
        sleep(1);
        printf("Now go!\n");
    /*wake one threads*/
    pthread_cond_signal(&cond);

    /*give the threads time to complete their tasks*/
        sleep(1);

    printf("Main is quitting...\n");
  
    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);

        return 0;
}
