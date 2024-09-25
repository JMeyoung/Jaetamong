#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char password[101];
        scanf("%s", password);
        int len = strlen(password);

        if (len >= 6 && len <= 9) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}