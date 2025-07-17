#include <stdio.h>
#include <string.h>

int main() {
    int K;
    char S[1001];

    scanf("%d", &K);
    scanf("%s", S);

    int len = strlen(S);

    if (K < 1) return 1;

    for (int i = 0; i < len; i += K) {
        printf("%c", S[i]);
    }
    printf("\n");
    return 0;
}