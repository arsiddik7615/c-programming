#include<stdio.h>
int main()
{
    char ar[6]="Rahat\0";
    int sz=sizeof(ar)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",ar);
    // // int ar[5]={'R','a','h','a','t'};
    // char ar[5]="Rahat";
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c",ar[i]);
    //     /* code */
    // }
    
    return 0;
}