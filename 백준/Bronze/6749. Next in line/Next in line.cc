#include <stdio.h>

int main() {
    int Y, M;
    scanf("%d %d", &Y, &M);

    int O = 2 * M - Y;
    printf("%d\n", O);

    return 0;
}
