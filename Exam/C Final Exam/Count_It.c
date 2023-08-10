#include <stdio.h>

int main() 
{
    char s[1001];
    
    fgets(s, sizeof(s), stdin);

    int small_count = 0;
    int capital_count = 0;
    int space_count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            small_count++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            capital_count++;
        } else if (s[i] == ' ') {
            space_count++;
        }
    }

    printf("Capital - %d\n", capital_count);
    printf("Small - %d\n", small_count);
    printf("Spaces - %d\n", space_count);

    return 0;
}
