#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=0;
    k=n*2-1;
    // s=n-1;
    // k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
            /* code */
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
            /* code */
        }
        // line sesh
        s++;
        k=k-2;
        printf("\n");
        /* code */
    }
    
    return 0;
}