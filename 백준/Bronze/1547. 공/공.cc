#include <stdio.h>

int main() {
    int M, X = 1, A, B;
    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        scanf("%d %d", &A, &B);
        if (A == X) {
            X = B;
        } else if (B == X) {
            X = A;
        }
    }

    printf("%d\n", X);
    return 0;
}