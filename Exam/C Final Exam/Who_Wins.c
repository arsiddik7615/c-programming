#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, temp;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
   
    if (n % 2 == 0) {
        printf("%d %d", arr[n/2-1], arr[n/2]);
    } else {
        printf("%d", arr[(n+1)/2-1]);
    }
    return 0;
}
