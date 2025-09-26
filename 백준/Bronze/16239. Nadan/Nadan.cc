#include <stdio.h>

int main() {
    long long K;
    int N;
    if (scanf("%lld", &K) != 1) return 0;
    if (scanf("%d", &N) != 1) return 0;

    long long a[105];
    long long baseSum = (long long)N * (N + 1) / 2;
    long long R = K - baseSum;

    for (int i = 0; i < N; i++) a[i] = i + 1;

    long long q = R / N, r = R % N;
    for (int i = 0; i < N; i++) a[i] += q;
    for (int i = N - r; i < N; i++) if (r > 0) a[i]++;

    for (int i = 0; i < N; i++) printf("%lld\n", a[i]);
    return 0;
}
