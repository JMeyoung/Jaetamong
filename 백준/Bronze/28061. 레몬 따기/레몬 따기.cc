#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    long long ai, best = -1;
    for (int i = 1; i <= N; i++) {
        if (scanf("%lld", &ai) != 1) return 0;
        long long cand = ai + (long long)i;
        if (cand > best) best = cand;
    }
    long long ans = best - (long long)(N + 1);
    if (ans < 0) ans = 0;
    printf("%lld\n", ans);
    return 0;
}