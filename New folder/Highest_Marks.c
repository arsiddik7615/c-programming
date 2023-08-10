#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    int marks[N];
   
    for (int i = 0; i < N; i++) {
        scanf("%d", &marks[i]);
    }

    int highestMark = 0;
    for (int i = 0; i < N; i++) {
        if (marks[i] > highestMark) {
            highestMark = marks[i];
        }
    }

        for (int i = 0; i < N; i++) {
        printf("%d ", highestMark - marks[i]);
    }
    printf("\n");

    return 0;
}
