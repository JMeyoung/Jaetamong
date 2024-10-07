#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;
    int sum_of_cubes = 0;

    for (int i = 1; i <= n; i++) {
        sum_of_cubes += i * i * i;
    }

    printf("%d\n", sum);
    printf("%d\n", sum * sum);
    printf("%d\n", sum_of_cubes);

    return 0;
}