#include <stdio.h>

void findNumberPosition(int T) {
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int S;
        scanf("%d", &S);

        int position = -1;
        for (int i = 0; i < N; i++) {
            if (arr[i] == S) {
                position = i + 1;
                break;
            }
        }

        printf("Case %d: ", t);
        if (position == -1) {
            printf("Not Found");
        } else {
            printf("%d", position);
        }
        printf("\n");
    }
}

int main() {
    int T;
  
    scanf("%d", &T);

    findNumberPosition(T);

    return 0;
}
