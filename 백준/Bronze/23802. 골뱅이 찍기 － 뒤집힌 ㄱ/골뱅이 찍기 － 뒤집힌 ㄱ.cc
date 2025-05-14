#include <stdio.h>

int main() {
    int N;
    (void)scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5 * N; j++) {
            printf("@");
        }
        printf("\n");
    }

    for (int i = 0; i < 4 * N; i++) {
        for (int j = 0; j < N; j++) {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}