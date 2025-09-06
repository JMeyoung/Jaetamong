#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int revA = reverse(A);
    int revB = reverse(B);

    if (revA > revB)
        printf("%d\n", revA);
    else
        printf("%d\n", revB);

    return 0;
}
