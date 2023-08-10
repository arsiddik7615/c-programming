#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int s=x-1;
    int k=1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
            /* code */
        }
        
        for ( int j = 0; j < k; j++)
        {
            
            printf("*");
            
            /* code */
        }
        s--;
        k=k+2;
        printf("\n");
        /* code */
    }
    
    return 0;
}