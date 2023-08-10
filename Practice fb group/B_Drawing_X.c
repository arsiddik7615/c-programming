#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char matrix[n][n];
    
    // initialize matrix with spaces
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = '*';
        }
    }
    
    // fill in the slashes, backslashes and asterisks
    for (int i = 0; i < n; i++) {
        matrix[i][i] = '\\';
        matrix[i][n-i-1] = '/';
        matrix[n/2][i] = '*';
        matrix[i][n/2] = '*';
    }
    
    // fill in the X letter
    matrix[n/2][n/2] = 'X';
    
    // print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
