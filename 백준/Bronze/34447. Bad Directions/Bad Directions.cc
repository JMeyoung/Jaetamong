#include <stdio.h>
#include <string.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int k;
        char n[12];
        if (scanf("%d %s", &k, n) != 2) break;

        for (int i = 0; n[i] != '\0'; i++) {
            int digit = n[i] - '0';
            printf("%d", (digit + k) % 10);
        }
        printf("\n");
    }

    return 0;
}