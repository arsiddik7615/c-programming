#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for (int i=1;i<=n;i=i+1)
    {
        scanf("%d",&a);
     if (a%2==0)
        {
            even++;
           
            /* code */
        }

        else 
            {
                odd++;
            }
        
        if (a>0)
            {
                pos++;
                /* code */
            }
        else if (a<0)
        {
                neg++;
            /* code */
                        

        }
        
        
        }
        printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);

    return 0;
}