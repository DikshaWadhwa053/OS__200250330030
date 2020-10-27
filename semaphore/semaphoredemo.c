#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>


sem_t count_sem;
int count=0;
void *inc_thread(void *arg){
//this fxn is acting as thread
while (1)
{
    //wait
    sem_wait(&count_sem);
    count++;
    printf("Incremented Thread: %d\n",count);
    sem_post(&count_sem);
}
}

void *dec_thread(void *arg){
//this fxn is acting as thread
while (1)
{
    sem_wait(&count_sem);
    count--;
    printf("Decrementing Thread: %d\n",count);
    sem_post(&count_sem);
}
}
int main(int argc, char const *argv[])
{
   pthread_t tid_inc,tid_dec;
   sem_init(&count_sem,0,1);
   pthread_create(&tid_inc,NULL, inc_thread,NULL);
   pthread_create(&tid_dec,NULL, dec_thread,NULL);
   pthread_join(tid_inc,NULL);//waiting state
   pthread_join(tid_dec,NULL);
   sem_destroy(&count_sem);
    return 0;
}
 
