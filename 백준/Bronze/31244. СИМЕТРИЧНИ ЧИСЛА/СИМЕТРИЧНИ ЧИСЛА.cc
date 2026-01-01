#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == C) {
        printf("%d%d%d", A, B, C);
    } else if (B == C) {
        printf("%d%d%d%d", A, B, C, A);
    } else {
        printf("%d%d%d%d%d", A, B, C, B, A);
    }

    return 0;
}
