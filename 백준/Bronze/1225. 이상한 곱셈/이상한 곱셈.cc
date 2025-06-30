#include <stdio.h>
#include <string.h>

int main() {
    char A[10001], B[10001];
    scanf("%s %s", A, B);

    long long sum = 0;
    int lenA = strlen(A);
    int lenB = strlen(B);

    for (int i = 0; i < lenA; i++) {
        for (int j = 0; j < lenB; j++) {
            sum += (A[i] - '0') * (B[j] - '0');
        }
    }

    printf("%lld\n", sum);
    return 0;
}