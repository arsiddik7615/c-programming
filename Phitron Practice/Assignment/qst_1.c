#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for (int i = 1; i <= (n*2)-1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
            /* code */
        }
        for (int j = 1; j <= k; j++)
        {
            
        printf("%d",j);
            /* code */
        }
        if (i<=n-1)
        {
            s--;
            k=k+2;       
          /* code */
        }
        else
        {
            s++;
            k=k-2;
        }
        
        printf("\n");
        /* code */
    }
    
    return 0;
}