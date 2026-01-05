#include <stdio.h>

int main() {
    long long a1, b1, c1;
    long long a2, b2, c2;
    long long h1, m1, s1;

    scanf("%lld %lld %lld", &a1, &b1, &c1);
    scanf("%lld %lld %lld", &a2, &b2, &c2);
    scanf("%lld %lld %lld", &h1, &m1, &s1);

    long long totalSeconds = h1 * (b1 * c1) + m1 * c1 + s1;

    long long h2 = totalSeconds / (b2 * c2);
    long long rest = totalSeconds % (b2 * c2);
    long long m2 = rest / c2;
    long long s2 = rest % c2;

    printf("%lld %lld %lld\n", h2, m2, s2);
    return 0;
}
