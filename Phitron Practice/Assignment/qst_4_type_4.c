#include<stdio.h>
void mlt(void)
{
    double a,b;
    scanf("%lf %lf",&a,&b);

    double y=a/b;
    printf("%0.2lf",y);

}
int main()
{
    mlt();
    return 0;
}