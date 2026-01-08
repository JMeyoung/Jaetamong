#include <stdio.h>

int main(void) {
    int last[11] = {0};
    for (int i = 1; i <= 100; i++) {
        int x;
        if (scanf("%d", &x) != 1) return 0;
        int p = x % 10;
        if (p == 0) p = 10;
        if (i > last[p]) last[p] = i;
    }
    int ans = 1;
    for (int p = 2; p <= 10; p++) {
        if (last[p] > last[ans]) ans = p;
    }
    printf("%d\n", ans);
    return 0;
}
