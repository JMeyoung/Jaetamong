#include <stdio.h>
#include <string.h>

int main() {
    char sanjini_id[101];
    char target_string[10001];
    int is_sanjini_char[26] = {0};

    scanf("%s", sanjini_id);
    scanf("%s", target_string);
    
    for (int i = 0; i < strlen(sanjini_id); i++) {
        is_sanjini_char[sanjini_id[i] - 'a'] = 1;
    }

    for (int i = 0; i < strlen(target_string); i++) {
        if (is_sanjini_char[target_string[i] - 'a'] == 0) {
            printf("%c", target_string[i]);
        }
    }
    printf("\n");

    return 0;
}