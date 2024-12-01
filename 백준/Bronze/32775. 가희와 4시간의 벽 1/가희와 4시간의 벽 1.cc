#include <stdio.h>

int main() {
    int S, F;
    scanf("%d %d", &S, &F);

    if (S <= F) {
        printf("high speed rail\n");
    } else {
        printf("flight\n");
    }

    return 0;
}
