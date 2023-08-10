#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s %s",s,t);
    int lnts=strlen(s);
    int lntt=strlen(t);
    printf("%d %d\n",lnts,lntt);
    printf("%s %s",s,t);
    return 0;
}