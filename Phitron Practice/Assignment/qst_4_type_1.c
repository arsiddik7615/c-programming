#include<stdio.h>
int sum(int x, int y)
{
    int sum=x+y;
    return sum;

}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int sum1=sum(x,y);
    printf("%d",sum1);
    return 0;
}