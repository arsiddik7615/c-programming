#include<stdio.h>
int main()
{
    int a,b;
    int sum,mns,mlt;
    float dvd;
    scanf("%d  %d",&a,&b);
    sum = a + b;
    mns = a - b;
    mlt = a * b;
    dvd = (float)a / b;
    printf("%d + %d=%d\n",a,b,sum);
        printf("%d - %d=%d\n",a,b,mns);

    printf("%d * %d=%d\n",a,b,mlt);

    printf("%d / %d=%0.2f\n",a,b,dvd);



    return 0;
}