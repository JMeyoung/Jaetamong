#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    long long ans = 0;
    for (int j = 0; j < M; j++) ans += 1;

    long long G;
    long long maxPerClass[1000] = {0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lld", &G);
            if (G > maxPerClass[j]) maxPerClass[j] = G;
        }
    }

    long long total = 0;
    for (int j = 0; j < M; j++) {
        if (maxPerClass[j] < 1) total += 1;
        else total += maxPerClass[j];
    }

    printf("%lld\n", total);
    return 0;
}
