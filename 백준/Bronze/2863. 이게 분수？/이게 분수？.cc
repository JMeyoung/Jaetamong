#include <stdio.h>

int main() {
    double a, b, c, d;
    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &c, &d);

    double vals[4];
    vals[0] = (a / c) + (b / d);
    vals[1] = (c / d) + (a / b); 
    vals[2] = (d / b) + (c / a);
    vals[3] = (b / a) + (d / c);

    int max_idx = 0;
    for (int i = 1; i < 4; i++) {
        if (vals[i] > vals[max_idx]) {
            max_idx = i;
        }
    }

    printf("%d\n", max_idx);
    return 0;
}
