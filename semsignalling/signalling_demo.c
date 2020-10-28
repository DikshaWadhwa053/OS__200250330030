#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
int a,b,sum;
sem_t S1,S2;
//S1=input to processing
//S2=processing to input
void* input_thread(void *data)
{
    while(1)
    {
        printf("T1:Got signal from processing thread\n");
        sem_wait(&S2);
        printf("T1:Getting new inputs\n");
        scanf("%d",&a);
        scanf("%d",&b);
        printf("T1: Got new Inputs\n");
        printf("T1:Sending signal to processing thread\n");
        sem_post(&S1);
        //sending sgnal
    }

}

void* processing_thread(void *data)
{
    while(1)
    {
        printf("T2:Waiting signal from inputS thread\n");
        sem_wait(&S1);
        printf("T2:Processing started\n");
        sum=a+b;
        printf("T2: Processing Done\n");
        printf("Sum is: %d\n",sum);
        sem_post(&S2);
        printf("T2:Sending signal to input thread\n");
    }

}
int main(int argc, char const *argv[])
{
    pthread_t input_id,processing_id;
    sem_init(&S1,0,0);
    sem_init(&S2,0,1);
    pthread_create(&input_id,NULL,input_thread,NULL);
    pthread_create(&processing_id,NULL,processing_thread,NULL);

    pthread_join(input_id,NULL);
    pthread_join(processing_id,NULL);
    return 0;
}
