#include <stdio.h>

int main() {
    int a, d, k;
    scanf("%d %d %d", &a, &d, &k);

    if (d == 0) {
        if (a == k) {
            printf("1\n");
        } else {
            printf("X\n");
        }
        return 0;
    }

    if ((k - a) % d == 0) {
        int n = (k - a) / d + 1;
        if (n >= 1) {
            printf("%d\n", n);
        } else {
            printf("X\n");
        }
    } else {
        printf("X\n");
    }

    return 0;
}