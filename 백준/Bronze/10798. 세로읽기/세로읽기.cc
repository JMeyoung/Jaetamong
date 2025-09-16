#include <stdio.h>
#include <string.h>

int main() {
    char s[5][16];
    int len[5], maxLen = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%15s", s[i]);
        len[i] = (int)strlen(s[i]);
        if (len[i] > maxLen) maxLen = len[i];
    }

    for (int c = 0; c < maxLen; c++) {
        for (int r = 0; r < 5; r++) {
            if (c < len[r]) printf("%c", s[r][c]);
        }
    }
    return 0;
}
