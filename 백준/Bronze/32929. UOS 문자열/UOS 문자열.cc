#include <stdio.h>

int main() {
    long long x;
    scanf("%lld", &x);

    char uos[] = "UOS";
    printf("%c\n", uos[(x - 1) % 3]);

    return 0;
}
