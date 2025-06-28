#include <stdio.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    if (A > B) {
        long long temp = A;
        A = B;
        B = temp;
    }
        long long n = B - A + 1;
        long long result = n * (A + B) / 2;

        printf("%lld\n", result);
        return 0;
}