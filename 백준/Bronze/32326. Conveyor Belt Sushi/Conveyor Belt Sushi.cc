#include <stdio.h>

int main() {
    int R, G, B;
    scanf("%d %d %d", &R, &G, &B);

    int cost = R * 3 + G * 4 + B * 5;
    printf("%d\n", cost);

    return 0;
}
