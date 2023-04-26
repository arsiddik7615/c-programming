#include<stdio.h>
int main()
{
   int y1,y2,y3,y4,y5,sum,avg;
    scanf("%d %d %d %d %d",&y1,&y2,&y3,&y4,&y5);
    sum=y1+y2+y3+y4+y5;
    sum<=30;
    avg=sum/5;

 
    printf("%d",avg);

    return 0;
}