#include <stdio.h>

int main(void) {
    long long N, K;
    if (scanf("%lld %lld", &N, &K) != 2) return 0;

    long long need = 1LL << (N - 1);

    long long ans = K / need;
    printf("%lld\n", ans);
    return 0;
}
