#include <stdio.h>

int main() {
    int N, C;
    scanf("%d %d", &N, &C);

    int fireworks[C + 1];
    for (int i = 0; i <= C; i++) {
        fireworks[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        int P;
        scanf("%d", &P);
        for (int j = P; j <= C; j += P) {
            fireworks[j] = 1;
        }
    }

    int count = 0;
    for (int i = 1; i <= C; i++) {
        if (fireworks[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}