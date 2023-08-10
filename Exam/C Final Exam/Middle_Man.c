#include <stdio.h>

void find_middle_age(int n, int ages[]) 

{
    int i, j, temp;

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ages[j] > ages[j + 1]) {
                temp = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = temp;
            }
        }
    }

    int middle_index = n / 2;

    if (n % 2 == 0) {
        printf("%d %d\n", ages[middle_index - 1], ages[middle_index]);
    } else {
        printf("%d\n", ages[middle_index]);
    }
}

int main() 

{
    int n;
    scanf("%d", &n);

    int ages[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }

    find_middle_age(n, ages);

    return 0;
}
