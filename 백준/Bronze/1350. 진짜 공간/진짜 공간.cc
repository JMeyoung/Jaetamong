#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long sizes[50];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &sizes[i]);
    }

    long long cluster;
    scanf("%lld", &cluster);

    long long total = 0;
    for (int i = 0; i < N; i++) {
        if (sizes[i] == 0) continue;
        long long clusters = (sizes[i] + cluster - 1) / cluster;
        total += clusters * cluster;
    }

    printf("%lld\n", total);
    return 0;
}
