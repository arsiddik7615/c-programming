#include<stdio.h>
int fun(char s[],int i)
{
    if (s[i]=='\0')
    {
        return 0;
        /* code */
    }
    
    int ans=fun(s,i+1);
    if (s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i]+32;
        /* code */
    }
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    {
        return ans+1;
        /* code */
    }
    else
    {
        return ans;
    }
    
    
}
int main()
{
    char s[205];
    fgets(s,205,stdin);
    int cnt=fun(s,0);
    printf("%d\n",cnt);
    return 0;
}