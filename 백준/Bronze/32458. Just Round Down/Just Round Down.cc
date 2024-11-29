#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);

    int result = (int)floor(x);
    printf("%d\n", result);

    return 0;
}
