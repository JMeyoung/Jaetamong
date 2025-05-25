#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int count = N;

    while (N >= M) {
        int bundle = N / M;
        count += bundle;
        N = bundle;
    }

    printf("%d\n", count);
    return 0;
}