#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N * 5; j++) {
            printf("@");
        }
        printf("\n");
    }

    for (int i = 0; i < 3 * N; i++) {
        for (int j = 0; j < N; j++) {
            printf("@");
        }
        for (int j = 0; j < 3 * N; j++) {
            printf(" ");
        }
        for (int j = 0; j < N; j++) {
            printf("@");
        }
        printf("\n");
    }
     for (int i = 0; i < N; i++) {
        for (int j = 0; j < N * 5; j++) {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}
