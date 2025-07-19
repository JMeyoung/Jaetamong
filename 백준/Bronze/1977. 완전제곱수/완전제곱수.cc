#include <stdio.h>
#include <math.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int sum = 0, min = -1;
    for (int i = 1; i * i <= N; i++) {
        int sq = i * i;
        if (sq >= M && sq <= N) {
            sum += sq;
            if (min == -1) min = sq;
        }
    }

    if (min == -1)
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, min);

    return 0;
}