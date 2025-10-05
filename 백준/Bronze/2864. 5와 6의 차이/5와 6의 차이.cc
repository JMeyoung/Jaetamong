#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long convert(const char *s, char from, char to) {
    char buf[32];
    int len = strlen(s);
    for (int i = 0; i < len; i++) buf[i] = (s[i] == from ? to : s[i]);
    buf[len] = '\0';
    return atoll(buf);
}

int main() {
    char A[32], B[32];
    if (scanf("%31s %31s", A, B) != 2) return 0;

    long long minSum = convert(A, '6', '5') + convert(B, '6', '5');
    long long maxSum = convert(A, '5', '6') + convert(B, '5', '6');

    printf("%lld %lld\n", minSum, maxSum);
    return 0;
}
