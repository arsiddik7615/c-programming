#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
        /* code */
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (a[i]+a[j]==x)
            {
                flag=1;
                /* code */
            }
            
            /* code */
        }
        
        /* code */
    }
    if (flag==0)
    {
        printf("NO\n");
        /* code */
    }
    else
    {
        printf("YES\n");
    }
    
    
    
    return 0;
}