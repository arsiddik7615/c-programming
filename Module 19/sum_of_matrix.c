#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&b[i][j]);
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           
            printf("%d ",a[i][j]);
            /* code */
        }
        printf("\n");
        /* code */
    }
    
    return 0;
}