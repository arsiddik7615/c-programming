#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if (x>='0' && x<='9')
    {
        printf("IS DIGIT\n");
        /* code */
    }
    else
    {
        printf("ALPHA\n");
        if (x>='a' && x<='z')
        {
            printf("IS SMALL\n");
            /* code */
        }
        else
        {
            printf("IS CAPITAL\n");
        }
        
        
    }
    return 0;
    
    return 0;
}
