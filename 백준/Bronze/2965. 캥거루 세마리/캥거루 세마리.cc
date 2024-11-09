#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int max_moves = (B - A > C - B) ? B - A - 1 : C - B - 1;
    printf("%d\n", max_moves);

    return 0;
}
