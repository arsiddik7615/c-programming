#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int div=n/10;
    int mod=n%10;
   if (n<10)
   {
    printf("NO");
    /* code */
   }
   
   else if (div == 0 || mod == 0)
    {
        printf("YES");
    }
    
    
   else if (div / mod ==0 && mod / div ==0)
    {
        printf("YES");
        /* code */
    }

    else
    {
        printf("NO");
    }
    
    
    return 0;
}