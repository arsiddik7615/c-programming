#include<stdio.h>

#include<string.h>
int main()
{
    char a[100];
    fgets(a,20,stdin);
    a[20]='\0';
    // gets(a);
    printf("%s",a);
    return 0;
}