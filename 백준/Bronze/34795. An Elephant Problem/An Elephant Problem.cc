#include <stdio.h>

int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    int n = (d + m - 1) / m;
    printf("%d", n);
    return 0;
}
