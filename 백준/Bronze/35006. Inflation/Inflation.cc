#include <stdio.h>

int main() {
    double n, p;
    scanf("%lf %lf", &n, &p);
    double loss = 55.0 * n * p / 1000.0;
    printf("%.10f\n", loss);
    return 0;
}
