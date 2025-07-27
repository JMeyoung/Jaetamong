#include <stdio.h>

int main() {
    int N, Q;
    int B[101], acc[101];
    scanf("%d %d", &N, &Q);

    acc[0] = 0;
    for (int i = 1; i <= N; i++) {
        scanf("%d", &B[i]);
        acc[i] = acc[i-1] + B[i];
    }

    for (int q = 0; q < Q; q++) {
        int t;
        scanf("%d", &t);
        for (int i = 1; i <= N; i++) {
            if (t < acc[i]) {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}