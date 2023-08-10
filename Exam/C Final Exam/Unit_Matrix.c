#include<stdio.h>
int main()
{
    int N;
    scanf("%d\n",&N);
    int M[100][100];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d",&M[i][j]);
            /* code */
        }
        
        /* code */
    }
    int flag = 1; 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i==j && M[i][j]!=1)
            {
                flag=0;
                break;
                /* code */
            }
            else if(i!=j && M[i][j]!=0)
            {
                flag=0;
                break;
            }

            /* code */
        }
        
        /* code */
    }
    if (flag==1)
    {
        printf("YES\n");
        /* code */
    }
    else
    {
        printf("NO\n");
    }
    
    
    
    return 0;
}
                /* code */
          