#include<stdio.h>
int sum(int x,int y)
{
    scanf("%d %d",&x,&y);
    int sum= x+y;
    return sum;
}
int main()
{
    
    int s=sum(5,6);
    printf("%d",s);
    return 0;
}