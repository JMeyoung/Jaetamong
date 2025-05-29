#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int freq[26] = {0};
    int max = 0, max_index = 0;
    int is_duplicate = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (isalpha(ch)) {
            ch = toupper(ch);
            freq[ch - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max) {
            max = freq[i];
            max_index = i;
            is_duplicate = 0;
        } else if (freq[i] == max && max != 0) {
            is_duplicate = 1;
        }
    }

    if (is_duplicate) {
        printf("?\n");
    } else {
        printf("%c\n", max_index + 'A');
    }

    return 0;
}