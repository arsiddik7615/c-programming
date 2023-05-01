#include<stdio.h>
// return_type name(parameter)
// {
//     code
//     what return?
// }
// int sum (int x,int y);
int sum (int x,int y)
{
   int sum=x+y;
   return sum;

}
int main()
{
    int s=sum(100,20);
    printf("%d",s);
    return 0;
}
