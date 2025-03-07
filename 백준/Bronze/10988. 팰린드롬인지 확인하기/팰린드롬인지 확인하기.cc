#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%s", word);

    int length = strlen(word);
    int is_palindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
