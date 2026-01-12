#include <stdio.h>

long long max(long long a, long long b) {
    return a > b ? a : b;
}

int main() {
    long long A, B, X, Y;
    scanf("%lld %lld %lld %lld", &A, &B, &X, &Y);

    long long p1 = 2 * ((A + X) + max(B, Y));
    long long p2 = 2 * (max(A, X) + (B + Y));

    printf("%lld\n", p1 < p2 ? p1 : p2);
    return 0;
}
