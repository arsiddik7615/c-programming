#include<stdio.h>
void fun(int x)
{
      
    if(x==0) return;
    fun(x-1);
    printf("%d\n",x);  

}
int main()
{
    int x;
    scanf("%d",&x);
    fun(x);
    return 0;
}