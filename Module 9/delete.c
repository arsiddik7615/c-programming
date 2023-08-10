#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);

        /* code */
    }
    int pos;
    scanf("%d",&pos);
    for (int i = pos; i < n-1; i++)
    {
        ar[i]=ar[i+1];
        /* code */
    }
    for (int i = 0; i < n-1; i++)
    {
        
        printf("%d ",ar[i]);
        /* code */
    }
    
    
    return 0;
}