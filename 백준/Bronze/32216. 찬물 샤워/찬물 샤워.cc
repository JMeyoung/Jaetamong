#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long k, T;
    if (scanf("%d %lld %lld", &n, &k, &T) != 3) return 0;

    long long d[1005];
    for (int i = 0; i < n; i++) scanf("%lld", &d[i]);

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (T > k) T = T + d[i] - llabs(T - k);
        else if (T < k) T = T + d[i] + llabs(T - k);
        else T = T + d[i];
        ans += llabs(T - k);
    }
    printf("%lld\n", ans);
    return 0;
}
