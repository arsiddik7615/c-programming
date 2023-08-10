#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);
    int A[N];
    for (i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }
    i = 0;
    for ( j = N-1; j >= 0; j--) {

            A[i]=A[j];
            i++;    
        
        if (A[i] != A[j])
             {
           printf("NO\n");
           break;
            /* code */
          }
         
          
            /* code */
          }
          
            printf("YES\n");
          
          
        return 0;

    }
       

