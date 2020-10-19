#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//receiever side
int main(int argc, char const *argv[])
{
    unsigned char rbuff[128];
    int fd;
    mkfifo("desdhyd",S_IRUSR |S_IWUSR);
    fd=open("desdhyd",O_RDONLY);
    read(fd,rbuff,128);
    printf("Received from sender :%s\n",rbuff);
    close(fd);
    return 0;
}
