#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int loss=x-y;
    int loss_prcnt=(loss*100)/x;
    printf("%d ",loss_prcnt);
    return 0;
}