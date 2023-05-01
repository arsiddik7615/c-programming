#include<stdio.h>
//Global
int x=500;
void fun(void)
{
    int s=100;
    printf("Fun er x er address - %p\n",&x);
}
int main()
{
    int s=200;
    printf("Main er s er address - %p\n",&s);
    fun();
    return 0;
}