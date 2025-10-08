#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, x[25], y[25];
    long long perim = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d %d", &x[i], &y[i]);
    for (int i = 0; i < N; i++) {
        int j = (i + 1) % N;
        perim += abs(x[j] - x[i]) + abs(y[j] - y[i]);
    }
    printf("%lld\n", perim);
    return 0;
}
