#include <stdio.h>
#include <string.h>

int main() {
    int N;
    long long M;
    scanf("%d %lld", &N, &M);
    long long result = 1;
    for (int i = 0; i < N; i++) {
        long long a;
        scanf("%lld", &a);
        result = (result * (a % M)) % M;
    }
    printf("%lld\n", result);
    return 0;
}
