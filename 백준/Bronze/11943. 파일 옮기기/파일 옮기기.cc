#include <stdio.h>

int main() {
    int A, B, C, D;

    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);

    int moves1 = B + C; 
    int moves2 = A + D;

    if (moves1 < moves2) {
        printf("%d", moves1);
    } else {
        printf("%d", moves2);
    }

    return 0;
}