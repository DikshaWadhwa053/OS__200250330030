#include<stdio.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    unsigned char Rbuff[128];
    pid_t id;
    int pfd[2]; //2 descriptors
    pipe(pfd);

    
    id = fork();
    //Statements below this are executed for Child and Parent
    if(0==id)
    {
        //child process
        read(pfd[0],Rbuff,128);
        printf("Child: %s\n",Rbuff);
        close(pfd[0]);
    }
    else
    {
        //parent process
        write(pfd[1],"Diksha\n",7);
        close(pfd[1]);
      
    }
return 0;
}   
