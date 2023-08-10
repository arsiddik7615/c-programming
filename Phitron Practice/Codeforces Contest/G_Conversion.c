#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    scanf("%s",a);
    int len=strlen(a);
    for (int i = 0; i <len; i++)
    {
        if (a[i]==',')
        {
            a[i]=' ';
            /* code */
        }
        else if (a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
         
            /* code */
        }
        else if (a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
            /* code */
        }
        
        
        }
        printf("%s",a);

    return 0;
}