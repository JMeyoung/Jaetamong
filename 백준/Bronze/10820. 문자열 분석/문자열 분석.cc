#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char line[105];
    while (fgets(line, sizeof(line), stdin)) { 
        int lower = 0, upper = 0, digit = 0, space = 0;
        for (int i = 0; line[i] != '\0'; i++) {
            if (islower(line[i])) lower++;
            else if (isupper(line[i])) upper++;
            else if (isdigit(line[i])) digit++;
            else if (line[i] == ' ') space++;
        }
        printf("%d %d %d %d\n", lower, upper, digit, space);
    }
    return 0;
}