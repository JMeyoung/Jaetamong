#include <stdio.h>

int main() {
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#') {
        if (ch == '\n') {
            printf("%d\n", count);
            count = 0;
        } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    return 0;
}
