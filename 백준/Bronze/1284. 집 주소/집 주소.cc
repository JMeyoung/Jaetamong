#include <stdio.h>

int main() {
    char number[100];
    while (1) {
        scanf("%s", number);
        if (number[0] == '0') break;

        int width = 1; 
        for (int i = 0; number[i] != '\0'; i++) {
            if (number[i] == '1') {
                width += 2;
            } else if (number[i] == '0') {
                width += 4;
            } else {
                width += 3;
            }
            width += 1;
        }
        printf("%d\n", width);
    }

    return 0;
}