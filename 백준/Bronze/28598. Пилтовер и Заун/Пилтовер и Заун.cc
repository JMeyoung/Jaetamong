#include <stdio.h>

int main() {
    long long x1, x2, n;
    scanf("%lld %lld %lld", &x1, &x2, &n);

    if (n == 0) {
        if (x1 == x2) printf("YES\n");
        else printf("NO\n");
        return 0;
    }

    if (x1 < x2) {
        printf("NO\n");
        return 0;
    }

    long long diff = x1 - x2;

    if (diff % 2 != 0) {
        printf("NO\n");
        return 0;
    }

    long long S = diff / 2;

    if (S >= n) printf("YES\n");
    else printf("NO\n");

    return 0;
}
