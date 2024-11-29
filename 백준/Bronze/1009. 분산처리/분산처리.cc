#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        a %= 10;
        if (a == 0) {
            printf("10\n");
            continue;
        }

        int cycle[4];
        cycle[0] = a;
        for (int i = 1; i < 4; i++) {
            cycle[i] = (cycle[i - 1] * a) % 10;
        }

        int index = (b - 1) % 4;
        printf("%d\n", cycle[index]);
    }

    return 0;
}