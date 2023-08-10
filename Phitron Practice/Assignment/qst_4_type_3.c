#include<stdio.h>
void fun(int n,int ar[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
        /* code */
    }
    

}
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
    fun(n,ar);
    
    return 0;
}