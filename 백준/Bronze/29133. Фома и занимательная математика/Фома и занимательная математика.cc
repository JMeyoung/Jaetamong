#include <stdio.h>

long long pw(long long a, int x) {
    if (x == 1) return a;
    if (x == 2) return a * a;
    return a * a * a;
}

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    int cnt = 0;
    int ans = -1;

    for (int x = 1; x <= 3; x++) {
        long long sum = pw(a, x) + pw(b, x) + pw(c, x);
        if (sum == d) {
            cnt++;
            ans = x;
        }
    }

    if (cnt == 1)
        printf("%d\n", ans);
    else
        printf("-1\n");

    return 0;
}
