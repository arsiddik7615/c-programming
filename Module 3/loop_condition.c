#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for ( i = 1; i >= 30; i=i+1)
    {
        if (i%2==0)
        {
            printf("%d-even\n",i);
            /* code */
        }
        
        else
        {
            printf("%d-odd\n",i);
        }
        
        
        /* code */
    }
    
    
    
    return 0;
}