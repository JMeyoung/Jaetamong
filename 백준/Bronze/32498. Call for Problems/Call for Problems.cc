#include <stdio.h>

int main() {
    int n, d, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &d);
        if (d % 2 != 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
