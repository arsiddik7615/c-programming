#include<stdio.h>
int main()
{
    int x,y,m;
    scanf("%d %d %d",&x,&y,&m);
    int son_age=y*3-m;
    int fthr_age=x*3-son_age;
    printf("%d",fthr_age);
    return 0;
}