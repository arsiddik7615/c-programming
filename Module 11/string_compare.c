#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("a & b soman\n");
            break;
            /* code */
        }
        else if (a[i]=='\0')
        {
            printf("a choto\n");
            /* code */break;
        }
        else if (b[i]=='\0')
        {
            printf("b choto\n");
            break;
            /* code */
        }
        if (a[i]==b[i])
        {
            i++;
            /* code */
        }
        else if (a[i]<b[i])
        {
            printf("a choto\n");
            break;
            /* code */
        }
        else
        {
            printf("b choto\n");
            break;
        }
        
        
        
        
        /* code */
    }
    
    return 0;
}