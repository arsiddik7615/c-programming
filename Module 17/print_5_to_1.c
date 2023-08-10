#include<stdio.h>
void fun(int i)
{
   if(i==0) return;
    printf("%d\n",i);
    int y=i-1;
    fun(y);
}
int main()
{
    int x;

    scanf("%d",&x);
    fun(x);
    return 0;
}