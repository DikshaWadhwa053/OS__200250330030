#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//Sender side
int main(int argc, char const *argv[])
{
   int fd;
   mkfifo("desdhyd",S_IRUSR |S_IWUSR);
   fd=open("desdhyd",O_WRONLY);
   write(fd,"DikshaCdac\n",11);
   close(fd);
    return 0;
}
