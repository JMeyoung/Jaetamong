#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    if (N == M) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}