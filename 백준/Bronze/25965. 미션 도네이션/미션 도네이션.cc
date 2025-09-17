#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    for (int game = 0; game < N; game++) {
        int M;
        scanf("%d", &M);
        long long K[100], D[100], A[100];
        for (int i = 0; i < M; i++) scanf("%lld %lld %lld", &K[i], &D[i], &A[i]);
        long long k, d, a;
        scanf("%lld %lld %lld", &k, &d, &a);

        long long total = 0;
        for (int i = 0; i < M; i++) {
            long long val = k * K[i] - d * D[i] + a * A[i];
            if (val > 0) total += val;
        }
        printf("%lld\n", total);
    }
    return 0;
}
