#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int n=strlen(s);
    int l[26]={0};
    for (int i = 0; i < n; i++)
    {
        l[s[i]-'a']++;
        /* code */
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", 'a'+i, l[i]);
        /* code */
    }
    
    return 0;
}