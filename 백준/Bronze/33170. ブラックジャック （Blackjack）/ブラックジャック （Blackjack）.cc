#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if (A + B + C <= 21)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}