#include<stdio.h>
int fun(void)
{
    int n;
    scanf("%d",&n);  
    
    return n ;
}
int main()
{

    int n=fun();
    if (n%2==0)
    {
      printf("EVEN\n");

        /* code */
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}