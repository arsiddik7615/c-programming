#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (a>='a' && a<='z')
    {
        int ans=a-31;
        printf("%c",ans);
        /* code */
    }
    else
    {
        int ans=a+32;
        printf("%c",ans);
    }
    
    
    return 0;
}