#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);
    int k=strlen(a);
    int y=strlen(b);

    printf("%d %d\n",k,y);
    printf("%s%s\n",a,b);
   
        char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
        
        /* code */

    
    
    printf("%s %s\n",a,b);
        
    

    return 0;
}