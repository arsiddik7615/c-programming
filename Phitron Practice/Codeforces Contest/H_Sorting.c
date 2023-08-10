#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        /* code */
          
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                /* code */
            }
            
            /* code */
        }
        
       /* code */
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
        /* code */
    }
    
    
      
    
    
    return 0;
}