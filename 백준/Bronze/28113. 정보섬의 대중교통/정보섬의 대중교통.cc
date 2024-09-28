#include <stdio.h>

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    if (N < B) {
        if (B < A)
          printf("Subway");
        else if ( B == A)
          printf("Anything");
        else
          printf("Bus");
    } else if (N == B) {
        if (B < A)
          printf("Subway\n");
        else if (B == A)
          printf("Anything");
        else
          printf("Bus");
    } else {
        printf("Bus\n");
    }

    return 0;
}