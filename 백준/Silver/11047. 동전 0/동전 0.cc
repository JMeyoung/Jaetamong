#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int coins[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &coins[i]);
    }

    int count = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (K == 0) break;

        if (coins[i] <= K) {
            count += K / coins[i];
            K %= coins[i];
        }
    }

    printf("%d\n", count);
    return 0;
}