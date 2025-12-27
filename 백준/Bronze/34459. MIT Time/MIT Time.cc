#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long N;
        scanf("%lld", &N);
        if (N <= 5) {
            printf("MIT time\n");
        } else {
            long long p = 5;
            int k = 1;
            while (p < N) {
                p *= 5;
                k++;
            }
            printf("MIT^%d time\n", k);
        }
    }
    return 0;
}
