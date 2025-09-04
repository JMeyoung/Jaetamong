#include <stdio.h>
#include <math.h>
#include <limits.h>

int is_prime(int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    int r = (int)sqrt((double)x);
    for (int i = 3; i <= r; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int M, N;
    if (scanf("%d", &M) != 1) return 0;
    if (scanf("%d", &N) != 1) return 0;

    long long sum = 0;
    int minp = INT_MAX;

    for (int x = M; x <= N; ++x) {
        if (is_prime(x)) {
            sum += x;
            if (x < minp) minp = x;
        }
    }

    if (minp == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%lld\n%d\n", sum, minp);
    }
    return 0;
}