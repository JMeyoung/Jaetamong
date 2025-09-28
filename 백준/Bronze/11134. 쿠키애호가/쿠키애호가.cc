#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        long long N, C;
        scanf("%lld %lld", &N, &C);
        printf("%lld\n", (N + C - 1) / C);
    }
    return 0;
}