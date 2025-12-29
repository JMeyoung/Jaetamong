#include <stdio.h>

int main() {
    int A[5], L[5], N, KWF;
    int total_grains = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &A[i], &L[i]);
        total_grains += A[i] * L[i];
    }
    scanf("%d %d", &N, &KWF);
    int avg_grains = total_grains / 5;
    int bushels = (N * avg_grains) / KWF;
    printf("%d\n", bushels);
    return 0;
}
