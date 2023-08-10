#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&ar[i]);
        /* code */
    }
    long long int sum=0;   
    for (int i = 0; i < n; i++)
    {
        sum=sum+ar[i];
       
        /* code */
    }
    if (sum<0)
    {
        printf("%lld\n",sum*-1);
        /* code */
    }
    else
    {
    
     printf("%lld\n",sum);
        /* code */
    }
    
    return 0;
}