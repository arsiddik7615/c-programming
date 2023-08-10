#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int profit = y - x;
    int percentage_profit = (profit * 100) / x;

    printf("%d\n", percentage_profit);

    return 0;
}
