#include<stdio.h>
int main()
{
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    
    if (a%k==0 && b%k==0)
    {
        printf("Both");
        /* code */
    }
   else if (a%k==0)
    {
        printf("Memo");
        /* code */
    }
    else if (b%k==0)
    {
        printf("Momo");
        /* code */
    }
    
    else
    {
        printf("No One");
    }
    
    return 0;
}