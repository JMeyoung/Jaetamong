#include <stdio.h>

int main() {
    long long a, b;
    while (1) {
        scanf("%lld %lld", &a, &b);
        if (a == 0 && b == 0) break;
        printf("%lld %lld / %lld\n", a / b, a % b, b);
    }
    return 0;
}