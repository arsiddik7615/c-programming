#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ar[i]);

        /* code */
    }
    int i=0,j=n-1;
    while (i<j)
    {
        int tmp=ar[i];
        ar[i]=ar[j];
        ar[j]=tmp;
        i++;
        j--;
        /* code */
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
        /* code */
    }
    
    
    return 0;
}