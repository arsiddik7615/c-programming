#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        /* code */
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
        /* code */
    }
    int ans[n+m];
    for (int i=0;i<n;i++)
    {
        ans[i]=a[i];
        /* code */
    }
  int i=n;
  for (int j = 0; j < m; j++)
  {
    ans[i]=b[j];
    i++;
    /* code */
  }
  

    
    
   for (int i=0;i<n+m;i++)
   {
    printf("%d ",ans[i]);
    /* code */
   }
   
    
    return 0;
}