#include<stdio.h>
long long int fact(long long int n)
{
    if (n==0)
    {
        return 1;
        /* code */
    }
    

   long long int ans=fact(n-1);
    return ans*n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int cnt=fact(n);
    printf("%lld",cnt);
    return 0;
}