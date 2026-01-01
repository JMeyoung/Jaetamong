#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int k = (N + 1) / 2;
        printf("%d\n", k * k);
    }

    return 0;
}
