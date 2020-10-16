#include <stdio.h>

int sub(int a,int b)
{
    int diff=0;
    diff=a-b;
    return diff;
}

int main(int argc, char const *argv[])
{
    printf("my first program\n");
    printf("the difference of the given no.s is:%d\n",sub(20,10));
    return 0;
}