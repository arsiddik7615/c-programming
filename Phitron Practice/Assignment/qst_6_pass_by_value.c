#include <stdio.h>

void pass_by_value(int val) {
    val++;
    printf("Inside the function = %d\n", val);
}

int main() {
    int val = 5;
    printf("Before the function call = %d\n", val);
    pass_by_value(val);
    printf("After the function call = %d\n", val);
    return 0;
}
