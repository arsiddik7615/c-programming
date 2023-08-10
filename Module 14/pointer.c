// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int * p=&x;
//     // printf("%p\n",p);
//     // printf("%d\n",*p);
//     *p=500;
//     printf("%d",x);
//     return 0;
// }
#include <stdio.h>
    int sum(int x, int y)
    {
    	int sum = x+y;
        return sum;
    }
    int main()
    {
       int s=sum(5,6);
       printf("%d",s);
       return 0;
    }