#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b == c) {
        printf("%d+%d=%d\n", a, b, c);
    } else if (a - b == c) {
        printf("%d-%d=%d\n", a, b, c);
    } else if (a * b == c) {
        printf("%d*%d=%d\n", a, b, c);
    } else if (a / b == c && a % b == 0) {
        printf("%d/%d=%d\n", a, b, c);
    } else if (a == b + c) {
        printf("%d=%d+%d\n", a, b, c);
    } else if (a == b - c) {
        printf("%d=%d-%d\n", a, b, c);
    } else if (a == b * c) {
        printf("%d=%d*%d\n", a, b, c);
    } else if (a == b / c && b % c == 0) {
        printf("%d=%d/%d\n", a, b, c);
    }

    return 0;
}
