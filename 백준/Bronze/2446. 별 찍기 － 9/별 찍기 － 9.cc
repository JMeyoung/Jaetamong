#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (N - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}