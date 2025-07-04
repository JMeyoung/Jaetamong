#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int a = 1;
    int b = 2 * A;
    int c = B;

    int discriminant = b * b - 4 * a * c;
    int sqrt_d = (int)sqrt(discriminant);

    int x1 = (-b + sqrt_d) / (2 * a);
    int x2 = (-b - sqrt_d) / (2 * a);

    if (x1 == x2) {
        printf("%d\n", x1);
    } else {
        if (x1 < x2)
            printf("%d %d\n", x1, x2);
        else
            printf("%d %d\n", x2, x1);
    }

    return 0;
}
