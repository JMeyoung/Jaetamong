#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int block = 0; block < 5; block++) {
        for (int i = 0; i < N; i++) {
            if (block % 2 == 0) {
                for (int j = 0; j < N; j++) printf("@");
                for (int j = 0; j < N * 3; j++) printf(" ");
                for (int j = 0; j < N; j++) printf("@");
            } else {
                for (int j = 0; j < N * 5; j++) printf("@");
            }
            printf("\n");
        }
    }

    return 0;
}