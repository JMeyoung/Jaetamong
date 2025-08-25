#include <stdio.h>

int main() {
    int x, cnt = 0;
    while (scanf("%d", &x) == 1) {
        if (x > 0) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
