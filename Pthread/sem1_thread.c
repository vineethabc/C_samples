
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define NUM 5

sem_t sem1;

void* thread_f(void* par){
        int id = (int) par;
   
    /*go to sleep*/
    sem_wait(&sem1);
        
        printf("Thread %d starting to work!\n",id);
    sem_post(&sem1);

}

int main(){
        pthread_t threads[NUM];
        int i;

    sem_init(&sem1, 0, 0);

        for (i=0;i<NUM;i++){
                pthread_create(&threads[i],NULL,thread_f,(void *)i);
        }

        printf("Everyone wait...\n");
        sleep(1);
        printf("Now go!\n");
    /*wake threads*/
//    for(i=0;i<NUM;i++)//----test-------
      sem_post(&sem1);//----test------

    /*give the threads time to complete their tasks*/
        sleep(1);

    printf("Main is quitting...\n");
        return 0;
}

