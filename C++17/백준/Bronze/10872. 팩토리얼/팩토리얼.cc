#include <stdio.h>

int main() {
    int N;
    unsigned long long result = 1;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        result *= i;
    }

    printf("%llu\n", result);

    return 0;
}