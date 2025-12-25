#include <stdio.h>

int main() {
    char name[101];
    
    scanf("%s", name);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            printf("%c", name[i]);
        }
    }

    return 0;
}