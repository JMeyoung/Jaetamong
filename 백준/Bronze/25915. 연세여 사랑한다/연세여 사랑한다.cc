#include <stdio.h>
#include <stdlib.h>

int pos(char x) { return x - 'A'; }

int main(void) {
    char c;
    if (scanf(" %c", &c) != 1) return 0;

    const char *s = "ILOVEYONSEI";
    int total = abs(pos(c) - pos('I'));

    for (int i = 1; s[i]; i++) {
        total += abs(pos(s[i]) - pos(s[i-1]));
    }

    printf("%d\n", total);
    return 0;
}
