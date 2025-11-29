#include <stdio.h>

int main() {
    int g, gb, y, r, ry;
    int T;
    scanf("%d %d %d %d %d", &g, &gb, &y, &r, &ry);
    scanf("%d", &T);

    long long red = 0, yellow = 0, green = 0;

    int len[5] = {g, gb, y, r, ry};

    int step = 0;

    while (T > 0) {
        int duration = len[step];
        int use = duration;
        if (use > T) use = T;

        if (step == 0) {
            green += use;
        } else if (step == 1) {
            green += use / 2;
        } else if (step == 2) {
            yellow += use;
        } else if (step == 3) {
            red += use;
        } else if (step == 4) {
            red += use;
            yellow += use;
        }

        T -= use;
        step = (step + 1) % 5;
    }

    printf("%lld %lld %lld\n", red, yellow, green);
    return 0;
}
