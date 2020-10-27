#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


pthread_mutex_t count_mutex;
pthread_mutexattr_t count_mutex_attr;
int count=0;
void *inc_thread(void *arg){
//this fxn is acting as thread
while (1)
{   
    //lock
    pthread_mutex_lock(&count_mutex);
    //critical secton
    count++;
    printf("Incremented Thread: %d\n",count);
    //unlock
    pthread_mutex_unlock(&count_mutex);
}
}

void *dec_thread(void *arg){
//this fxn is acting as thread
while (1)
{
    pthread_mutex_lock(&count_mutex);
    count--;
    printf("Decrementing Thread: %d\n",count);
    pthread_mutex_unlock(&count_mutex);
}
}
int main(int argc, char const *argv[])
{   
     pthread_t tid_inc,tid_dec;
    //mutex initialisation
    pthread_mutexattr_init(&count_mutex_attr);
    pthread_mutex_init(&count_mutex,&count_mutex_attr);
  
   pthread_create(&tid_inc,NULL, inc_thread,NULL);
   pthread_create(&tid_dec,NULL, dec_thread,NULL);
   pthread_join(tid_inc,NULL);//waiting state
   pthread_join(tid_dec,NULL);
   //destroy the mutex
   pthread_mutex_destroy(&count_mutex);
   pthread_mutexattr_destroy(&count_mutex_attr);
    return 0;
}
