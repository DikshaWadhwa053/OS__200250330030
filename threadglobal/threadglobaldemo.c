#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


int count=0;
int add(int a,int b)
{
    return a+b;
}
void *thread(void *arg){
//this fxn is acting as thread
    count++;
    //stack cant be shared between main and thread fxn
    printf("addition in thread is:%d\n",add(10,200));
    printf("count is:%d\n",count);
    printf("Thread ******\n");
}
int main(int argc, char const *argv[])
{
   pthread_t tid;
   count++;
   printf("before thread creation\n");
   pthread_create(&tid,NULL,thread,NULL);
   printf("count is:%d\n",count);
   printf("addition in main is:%d\n",add(100,200));
   
    return 0;
}
