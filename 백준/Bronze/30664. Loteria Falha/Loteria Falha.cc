#include <stdio.h>
#include <string.h>

int main() {
    char num[35];
    while (1) {
        scanf("%s", num);

        if (strcmp(num, "0") == 0)
            break;

        int remainder = 0;

        for (int i = 0; num[i] != '\0'; i++) {
            remainder = (remainder * 10 + (num[i] - '0')) % 42;
        }

        if (remainder == 0)
            printf("PREMIADO\n");
        else
            printf("TENTE NOVAMENTE\n");
    }

    return 0;
}