#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int points = 2;
    for (int i = 0; i < N; i++) {
        points = points * 2 - 1;
    }

    int total_points = points * points;
    printf("%d\n", total_points);

    return 0;
}
