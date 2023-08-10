#include<stdio.h>
#include<string.h>
void fun(char s[],int slen)
{
 char r[10001];
      int j=0;
      
  
    for (int i = slen-1; i >= 0; i--)
    {
        r[j]=s[i];
        j++;
      
        /* code */
    }  

    if (strcmp(r,s)==0)
    {
        printf("Palindrome\n");
        /* code */
    }
    else
    {
        printf("Not Palindrome\n");
    }
    
}
int main()
{
    char s[10001];
    scanf("%s",s);
    int slen=strlen(s);
    fun(s,slen);

    
    


    return 0;
}