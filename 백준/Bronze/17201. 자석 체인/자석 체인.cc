#include <stdio.h>

int main() {
    int N;
    char s[16];
    if (scanf("%d", &N) != 1) return 0;
    if (scanf("%s", s) != 1) return 0;

    for (int k = 1; k <= N - 1; ++k) {
        if (s[2*k - 1] == s[2*k]) {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}
