#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int div=n/x;
    int mod=n%x;
    printf("%d %d",div,mod);
    return 0;
}