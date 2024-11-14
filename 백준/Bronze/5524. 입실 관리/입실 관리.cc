#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char name[21];

    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        for (int j = 0; name[j] != '\0'; j++) {
            if (name[j] >= 'A' && name[j] <= 'Z') {
                name[j] = name[j] + ('a' - 'A');
            }
        }
        printf("%s\n", name);
    }

    return 0;
}
