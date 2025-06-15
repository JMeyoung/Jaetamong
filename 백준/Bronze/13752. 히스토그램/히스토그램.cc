#include <stdio.h>

int main() {
    int K, N;
    scanf("%d", &K);
    
    for (int i = 0; i < K; i++) {
        scanf("%d", &N);
        for (int j = 0; j < N; j++) {
            printf("=");
        }
        printf("\n");
    }
    return 0;
        }