#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>





int main(int argc, char const *argv[])
{
    int fd;

    fd = open("desd1.txt",O_WRONLY|O_CREAT);

    if(-1==fd)
    {
        perror("there is some error in open");
        return -1;
    }
    write(fd,"cdac hyd\n",8);
    close(fd);
    return 0;
}
