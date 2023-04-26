#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000];
 
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
            
        /* code */
    }
   

   int x;
    
    scanf("%d",&x);
    int sm_vr=0,m_vr=0;
    for (int i = 0; i < n; i++)
    {
        if (x==a[i])
        {
              sm_vr++; 
             
            /* code */
        }
        else
        {
            m_vr++;
            
        }
        
       
        /* code */
    }
    printf("%d",sm_vr); 

    

    return 0;
}