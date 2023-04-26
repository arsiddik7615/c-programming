#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001];
    scanf("%s",S);
    int n=strlen(S);
    int vowel_count=0;
    for (int i = 0; i < n; i++)
    {
       if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            vowel_count++;
        }
        
       
        /* code */
    }
        printf("%d",vowel_count);
    return 0;
}