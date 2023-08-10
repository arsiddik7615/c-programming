#include <stdio.h>

void printPattern(int N) {
    int mid = N / 2;
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == mid || j == mid) {
                printf("#");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printPattern(N);

    return 0;
}
