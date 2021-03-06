#include<stdio.h>
#include<pthread.h>
//shared resource
int flag=0;
//mutex m1
pthread_mutex_t m1;
//conditional variable cv1
pthread_cond_t cv1;
//thread1
void* thread1(void *data){
    printf("T1:Grabbing the mutex\n");
    //critical section
    pthread_mutex_lock(&m1);
    printf("T1:Before busy loop\n");
    while(flag !=1)
    {
        printf("T1:Entering conditional wait\n");
        pthread_cond_wait(&cv1, &m1);
        printf("T1:Exiting conditional wait\n");

    }
    printf("T1:After busy loop\n");

    pthread_mutex_unlock(&m1);
    printf("T1:releasing the mutex\n");

}

//thread2
void* thread2(void* data)
{
    printf("T2:Grabbing the mutex\n");

    pthread_mutex_lock(&m1);
    printf("T2:before setting flag\n");
    flag=1;
    printf("T2:after setting flag\n");

    pthread_mutex_unlock(&m1);
    printf("T2:Releasing the mutex\n");
    pthread_cond_signal(&cv1);
    printf("T2:Signalling the CV\n");
}
int main(int argc, char const *argv[])

{pthread_mutex_init(&m1,NULL);
    pthread_cond_init(&cv1,NULL);
       //thread initialization
    pthread_t t1,t2;
    //thread creation
    pthread_create(&t1,NULL,thread1,NULL);
    pthread_create(&t2,NULL,thread2,NULL);
    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    //mutex initialization
    
    //mutex destroy
    pthread_mutex_destroy(&m1);
    pthread_cond_destroy(&cv1);

    return 0;
}
