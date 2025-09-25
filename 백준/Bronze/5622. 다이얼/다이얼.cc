#include <stdio.h>

int main() {
    char s[20];
    if (scanf("%19s", s) != 1) return 0;

    int ans = 0;
    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if ('A' <= c && c <= 'C') ans += 3;
        else if ('D' <= c && c <= 'F') ans += 4;
        else if ('G' <= c && c <= 'I') ans += 5;
        else if ('J' <= c && c <= 'L') ans += 6;
        else if ('M' <= c && c <= 'O') ans += 7;
        else if ('P' <= c && c <= 'S') ans += 8;
        else if ('T' <= c && c <= 'V') ans += 9;
        else if ('W' <= c && c <= 'Z') ans += 10;
    }

    printf("%d\n", ans);
    return 0;
}
