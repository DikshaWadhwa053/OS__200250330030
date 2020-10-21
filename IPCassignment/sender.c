#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    unsigned int i[0],j;
    int fd1,fd2;
    mkfifo("add",S_IRWXU);
    fd1=open("add",O_WRONLY);
    write(fd1,7,4);
    close(fd1);
    //fd2=open("add",O_WRONLY);
    //write(fd2,8,4);
    //close(fd2);
    return 0;
}
