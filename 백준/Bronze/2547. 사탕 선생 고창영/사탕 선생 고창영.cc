#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N, candy, sum = 0;
        scanf("%lld", &N);

        for (long long i = 0; i < N; i++) {
            scanf("%lld", &candy);
            sum = (sum + candy) % N;
        }

        if (sum % N == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}