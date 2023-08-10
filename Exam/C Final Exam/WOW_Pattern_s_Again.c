#include <stdio.h>

void printPattern(int N) {
    int i, j, k;
    int space = N - 1;
    int symbol = 1;
    
    for (i = 1; i <= N; i++) {
        // Print spaces
        for (j = 1; j <= space; j++)
            printf(" ");
            
        // Print symbols
        for (k = 1; k <= symbol; k++)
        {
            if (i%2==0)
            {
                
            printf("*");
                /* code */
            }
            else
            {
                printf("^");
            }
            
                
                /* code */
            
            
        }
            
        printf("\n");
        
        space--;
        symbol += 2;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    printPattern(N);
    
    return 0;
}
