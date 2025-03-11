#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int baskets[101] = {0};

    for (int t = 0; t < M; t++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);

        for (int b = i; b <= j; b++) {
            baskets[b] = k;
        }
    }

    for (int b = 1; b <= N; b++) {
        printf("%d ", baskets[b]);
    }

    printf("\n");
    return 0;
}
