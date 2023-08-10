#include <stdio.h>

int main() {
    int R1, R2;
    scanf("%d %d", &R1, &R2);
    
    // calculate the total runs made by the players
    int total_runs = 6*R1 + 4*R2;
    
    // calculate the average run per player in the series
    int avg_runs = total_runs/10;
    
    printf("%d\n", avg_runs);
    
    return 0;
}
