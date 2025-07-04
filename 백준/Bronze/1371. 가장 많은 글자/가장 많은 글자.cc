#include <stdio.h>

int main() {
    int count[26] = {0};
    int c;
    while ((c = getchar()) != EOF) {
        if ('a' <= c && c <= 'z') {
            count[c - 'a']++;
        }
    }

    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max) max = count[i];
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] == max) {
            printf("%c", i + 'a');
        }
    }
    printf("\n");
    return 0;
}