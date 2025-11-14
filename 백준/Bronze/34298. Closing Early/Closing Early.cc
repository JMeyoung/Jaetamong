#include <stdio.h>

int main(void) {
    long long R, S;
    int N;
    if (scanf("%lld %lld %d", &R, &S, &N) != 3) return 0;

    if (R % S == 0) {
        printf("0\n");
        return 0;
    }

    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        long long a;
        scanf("%lld", &a);
        sum = (sum + a) % S;
        if (sum == R) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
