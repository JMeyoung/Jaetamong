#include <stdio.h>

int main() {
    int N;
    char s[70];
    scanf("%d %s", &N, s);

    long long shift = 1;
    for (int i = 0; i < N; i++) {
        int v = s[i] - 'A';
        v = (v + (shift % 26)) % 26;
        s[i] = v + 'A';
        shift <<= 1;
    }

    printf("%s\n", s);
    return 0;
}
