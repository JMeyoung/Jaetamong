#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long long N, K, S;
        scanf("%lld %lld %lld", &N, &K, &S);

        long long option1 = K + N;
        long long option2 = 2 * K + N - 2 * S;

        long long answer = option1 < option2 ? option1 : option2;

        printf("Case #%d: %lld\n", i, answer);
    }

    return 0;
}
