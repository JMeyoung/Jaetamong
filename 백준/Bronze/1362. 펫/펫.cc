#include <stdio.h>

int main() {
    int o, w, tc = 1;
    while (1) {
        if (scanf("%d %d", &o, &w) != 2) return 0;
        if (o == 0 && w == 0) break;

        int alive = 1;
        while (1) {
            char op[3];
            int n;
            if (scanf("%s %d", op, &n) != 2) return 0;
            if (op[0] == '#' && n == 0) break;
            if (!alive) continue;
            if (op[0] == 'F') w += n;
            else if (op[0] == 'E') w -= n;
            if (w <= 0) alive = 0;
        }

        if (!alive) printf("%d RIP\n", tc++);
        else if (w > o / 2 && w < 2 * o) printf("%d :-)\n", tc++);
        else printf("%d :-(\n", tc++);
    }
    return 0;
}