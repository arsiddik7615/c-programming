#include<stdio.h>
void fun(int *p)
{
    printf("p er value -%p\n",p);
    *p=100;

}
int main()
{
    int x=10;
    printf("x er address -%p\n",&x);
    
    fun(&x);
    printf("%d\n",x);
    return 0;
}