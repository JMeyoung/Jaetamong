#include <stdio.h>

int main() {
    int R, S;
    scanf("%d %d", &R, &S);

    int total_cupcakes = R * 8 + S * 3;
    int leftover_cupcakes = total_cupcakes - 28;

    printf("%d\n", leftover_cupcakes);

    return 0;
}
