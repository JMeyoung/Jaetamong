#include <stdio.h>

int main() {
    char word;
    scanf("%c", &word);

    if (word == 'M')
        printf("MatKor\n");
    else if (word == 'W')
        printf("WiCys\n");
    else if (word == 'C')
        printf("CyKor\n");
    else if (word == 'A')
        printf("AlKor\n");
    else if (word == '$')
        printf("$clear\n");

    return 0;
}