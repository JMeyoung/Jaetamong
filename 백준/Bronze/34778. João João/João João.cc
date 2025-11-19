#include <stdio.h>

int main() {
    int d, have[5] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%d", &d);
        have[d] = 1;
    }

    int missing = 0;
    for (int i = 1; i <= 4; i++) {
        if (!have[i]) missing++;
    }

    printf("%d\n", missing);
    return 0;
}
