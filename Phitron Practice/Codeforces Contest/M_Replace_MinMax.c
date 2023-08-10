#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n",&ar[i]);
        

        /* code */
    }
    int mn=INT_MAX,mnpos;
    int mx=INT_MIN,mxpos;
    
        for (int i = 0; i < n; i++)
        {
            if (ar[i]<mn)
            {
            mn=ar[i];
            mnpos=i;
                /* code */
            }
             if (ar[i]>mx)
            {
                mx=ar[i];
                mxpos=i;
              

                /* code */
            }
            
            
            /* code */
        }

        int temp = ar[mnpos];
    ar[mnpos] = ar[mxpos];
    ar[mxpos] = temp;
        for (int i = 0; i < n; i++)
        {

               printf("%d ",ar[i]); 
            /* code */
        }
                       printf("\n");

        /* code */
    
    
   
    
    return 0;
}