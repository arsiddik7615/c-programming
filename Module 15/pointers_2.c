#include<stdio.h>
int main()
{
    double x=5.30;
    double *ptr=&x;
    double *ptr2=ptr;
    *ptr2=100.50;
    printf("x er value- %0.2lf\n",x);
    printf("ptr er value- %0.2lf\n",ptr);
    printf("x er address - %p\n",&x);
    printf("ptr er value- %d\n",*ptr);
    printf("ptr er address - %p\n",&ptr);
    return 0;
}