#include<stdio.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;

    id=fork();
    if(id==0)
    {
        //Child
        printf("Child Started\n");
        sleep(12);
        printf("Child Exiting\n");
    }
    else
    {
    
        //parent
        printf("Parent starting\n");
        sleep(2);
        printf("Parent Exiting\n");
    }
    
    return 0;
}
