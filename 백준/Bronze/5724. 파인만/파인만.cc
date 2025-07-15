#include <stdio.h>

int main() {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        int sum = 0;
        for (int i = 1; i <= N; i++) {
            sum += i * i;
        }
        printf("%d\n", sum);
    }
    return 0;
}