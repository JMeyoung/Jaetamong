#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &D);

    C += D;
    B += C / 60;
    C %= 60;
    A += B / 60;
    B %= 60;
    A %= 24;

    printf("%d %d %d\n", A, B, C);

    return 0;
}
