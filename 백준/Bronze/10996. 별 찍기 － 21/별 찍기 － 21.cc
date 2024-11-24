#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j % 2 == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        
        for (int j = 0; j < N; j++) {
            if (j % 2 == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}