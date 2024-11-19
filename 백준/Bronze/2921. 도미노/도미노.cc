#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int total_points = 0;

    for (int i = 0; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            total_points += i + j;
        }
    }

    printf("%d\n", total_points);

    return 0;
}
