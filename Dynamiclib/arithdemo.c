#include<stdio.h>
#include"arith.h"

int add(int, int);
int sub(int, int);
int mul(int,int);


int main(int argc, char const *argv[])
{
    printf("the addition is:%d\n",add(10,30));
    printf("the difference is:%d\n",sub(47,30));
    printf("the product is:%d\n",mul(2,3));
   
    return 0;
}