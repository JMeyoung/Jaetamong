#include <stdio.h>

int main() {
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);

    if (B >= C) {
        printf("-1\n");
    } else {
        long long breakeven = A / (C - B) + 1;
        printf("%lld\n", breakeven);
    }

    return 0;
}
