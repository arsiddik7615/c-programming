#include<stdio.h>
int main()
{
    int m,n=100;
    
    scanf("%d %d",&n,&m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ",j);
            /* code */
        }
        printf("\n");
        /* code */
    }
    
    
   
    
    return 0;
}