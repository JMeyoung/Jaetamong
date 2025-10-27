#include <stdio.h>

int main() {
    double S, D, T;
    scanf("%lf", &S);
    scanf("%lf", &D);
    scanf("%lf", &T);

    double speed_ft_per_s = S * 5280.0 / 3600.0;
    double dist = speed_ft_per_s * T;

    if (dist + 1e-12 >= D)
        printf("MADE IT\n");
    else
        printf("FAILED TEST\n");

    return 0;
}
