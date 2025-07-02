#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    long long sum = 0;
    for (long long k = 1; k < N; k++) {
        sum += k * (N + 1);
    }

    printf("%lld\n", sum);
    return 0;
}