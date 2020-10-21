#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    unsigned int i,j;
    int fd1,fd2;
    mkfifo("add",S_IRWXU);
    fd1=open("add",O_RDONLY);
    read(fd1,i,4);
     printf("Rxd from sender :%d \n",i);
    close(fd1);
    fd2=open("add",O_RDONLY);
    read(fd2,j,4);
    printf("Rxd from sender :%d \n",j);
    close(fd2);
    return 0;
}
