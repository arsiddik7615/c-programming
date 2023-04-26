#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int n=strlen(s),sl=0,cl=0;
    for (int i = 0; i < n ; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            
            cl++;
               

            /* code */
        }
        
         else
         {
            sl++;
         }
         
        
        /* code */
    }

   printf("%d %d",cl,sl);
    return 0;
}