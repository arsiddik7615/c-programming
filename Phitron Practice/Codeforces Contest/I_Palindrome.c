#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%s",s);
    int slen=strlen(s);
    char r[10001];
    int j=0;
    for (int i =slen-1; i>=0; i--)
    {
       
        r[j]=s[i];
        j++;
        /* code */
    }
    if (strcmp(s,r)==0)
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