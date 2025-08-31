#include <stdio.h>

int main() {
    int h, m, s, q;
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &q);
    int cur = h * 3600 + m * 60 + s;
    while (q--) {
        int T;
        scanf("%d", &T);
        if (T == 1) {
            int c;
            scanf("%d", &c);
            cur = (cur + c) % 86400;
        } else if (T == 2) {
            int c;
            scanf("%d", &c);
            cur = (cur - c % 86400 + 86400) % 86400;
        } else if (T == 3) {
            int hh = cur / 3600;
            int mm = (cur % 3600) / 60;
            int ss = cur % 60;
            printf("%d %d %d\n", hh, mm, ss);
        }
    }
    return 0;
}
