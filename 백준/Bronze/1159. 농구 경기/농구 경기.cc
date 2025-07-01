#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int count[26] = {0};
    char name[31];

    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        count[name[0] - 'a']++;
    }

    int found = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] >= 5) {
            printf("%c", i + 'a');
            found = 1;
        }
    }

    if (!found) printf("PREDAJA");
    printf("\n");

    return 0;
}