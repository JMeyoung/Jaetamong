#include <stdio.h>

int main() {
    int max_score = 0, winner = 0;
    for (int i = 1; i <= 5; i++) {
        int sum = 0, score;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score);
            sum += score;
        }
        if (sum > max_score) {
            max_score = sum;
            winner = i;
        }
    }
    printf("%d %d\n", winner, max_score);
    return 0;
}