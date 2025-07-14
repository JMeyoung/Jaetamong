#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a > b) { int tmp = a; a = b; b = tmp; }
        if (b > c) { int tmp = b; b = c; c = tmp; }
        if (a > b) { int tmp = a; a = b; b = tmp; }

        printf("Scenario #%d:\n", t);
        if (a * a + b * b == c * c)
            printf("yes\n");
        else
            printf("no\n");
        printf("\n");
    }
    return 0;
}