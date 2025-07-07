#include <stdio.h>

int main() {
    int a, b, c, d;
    int p, m, g;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d", &p, &m, &g);

    int times[3] = {p, m, g};

    for (int i = 0; i < 3; i++) {
        int cnt = 0;
        if ((times[i] - 1) % (a + b) < a) cnt++;
        if ((times[i] - 1) % (c + d) < c) cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}
