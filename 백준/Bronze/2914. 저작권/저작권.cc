#include <stdio.h>

int main() {
    int A, I;
    scanf("%d %d", &A, &I);

    int min_copyright_fee = A * (I - 1) + 1;
    printf("%d\n", min_copyright_fee);

    return 0;
}
