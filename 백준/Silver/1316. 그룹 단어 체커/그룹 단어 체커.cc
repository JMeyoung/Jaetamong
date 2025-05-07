#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);
    char word[101];

    for (int i = 0; i < N; i++) {
        scanf("%s", word);

        int alphabet[26] = {0};
        int isGroup = 1;

        for (int j = 0; word[j] != '\0'; j++) {
            if (word[j] != word[j - 1]) {
                if (alphabet[word[j] - 'a']) {
                    isGroup = 0;
                    break;
                }
                alphabet[word[j] - 'a'] = 1;
            }
        }

        if (isGroup)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
