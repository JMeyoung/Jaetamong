#include <stdio.h>

int main() {
    int n, count = 0;
    char s[51];  

    scanf("%d", &n);
    scanf("%s", s);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}