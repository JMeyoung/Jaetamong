#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        double value;
        char unit[3];
        scanf("%lf %s", &value, unit);

        if (strcmp(unit, "kg") == 0) {
            printf("%.4lf lb\n", value * 2.2046);
        } else if (strcmp(unit, "lb") == 0) {
            printf("%.4lf kg\n", value * 0.4536);
        } else if (strcmp(unit, "l") == 0) {
            printf("%.4lf g\n", value * 0.2642);
        } else if (strcmp(unit, "g") == 0) {
            printf("%.4lf l\n", value * 3.7854);
        }
    }

    return 0;
}
