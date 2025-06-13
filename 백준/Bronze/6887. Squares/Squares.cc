#include <stdio.h>

int main() {
    int side = 0, T;
    scanf("%d", &T);

    while((side + 1) * (side + 1) <= T) {
        side++;
    }
        printf("The largest square has side length %d.", side);

    return 0;
} 