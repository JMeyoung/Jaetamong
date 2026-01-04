#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char s[101];

    scanf("%d", &n);
    scanf("%s", s);

    int m = strlen(s);

    if (m > n) {
        printf("Impossible\n");
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += (s[i] - 'a' + 1);
    }

    printf("%d\n", sum);
    return 0;
}
