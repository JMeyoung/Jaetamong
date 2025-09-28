#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        int first, last, tmp;
        for (int i = 1; i <= N; i++) {
            scanf("%d", &tmp);
            if (i == 1) first = tmp;
            if (i == N) last = tmp;
        }
        int badFirst = (first == X);
        int badLast = (last == Y);
        if (badFirst && badLast) puts("BOTH");
        else if (badFirst) puts("EASY");
        else if (badLast) puts("HARD");
        else puts("OKAY");
    }
    return 0;
}