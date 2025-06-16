#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    char *S = (char *)malloc(sizeof(char) * (N + 1));
    if (S == NULL) {
        return 1;
    }

    scanf("%s", S);

    for (int i = 1; i < N; i++) {
        if (S[i] == 'J') {
            printf("%c\n", S[i-1]);
        }
    }

    free(S);
    S = NULL;

    return 0;
}