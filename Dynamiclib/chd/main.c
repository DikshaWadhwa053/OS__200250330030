#include<stdio.h>
#include"arith.h"

int main(int argc, char const *argv[])
{
    printf("friend add: %d\n",add(5,2));
    printf("difference is: %d\n",sub(5,7));
    printf("product is:%d\n",mul(44,5));
    return 0;
}
