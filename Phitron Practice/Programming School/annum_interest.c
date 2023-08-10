#include <stdio.h>

int main() {
    int P, X, Y;
    scanf("%d %d %d", &P, &X, &Y);

    int interest = (P * X * Y) / 100;
    printf("%d", interest);

    return 0;
}
