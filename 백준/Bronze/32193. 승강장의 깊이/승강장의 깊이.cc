#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A, B;
    int depth = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &A, &B);
        depth += (A - B);
        printf("%d\n", depth);
    }

    return 0;
}