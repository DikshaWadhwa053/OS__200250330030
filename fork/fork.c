#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{   
    pid_t id;
    printf("Execution before fork:\n");
    id=fork();
        if(id==0)
        {
            printf("Child id:\n");
            printf("execution before fork id\t PID\t PPID\t :%d %d %d\n",id,getpid(),getppid());
        }
        else
        {
            printf("Parents id:\n");
        }
        

    printf("Execution after fork id\t PID\t PPID\t:%d %d %d\n",id,getpid(),getppid());
    return 0;
}
