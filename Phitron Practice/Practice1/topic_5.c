#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 10000)
    {
        printf("Gucci bag\n");
        if (tk >= 20000)
        {
            printf("Gucci Belt");
            /* code */
        }
        
    }
     else if (tk >= 5000)
        {
            printf("Levis bag");
            /* code */
        }
      
    else
    {
        printf("Something");
    }
    
    return 0;


}