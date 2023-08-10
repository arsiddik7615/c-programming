#include<stdio.h>
int main()
{
    int x=100;
    int *ptr =&x;
    *ptr=200;


    printf("x er value - %d\n",x);
    printf("ptr er value - %d\n",*ptr);
    printf("x er address - %p\n",&x);
    printf("ptr er value - %p\n",ptr);
    printf("ptr er address - %p\n",&ptr);
    printf("ptr er memory - %d\n",sizeof(ptr));


  
    return 0;
}