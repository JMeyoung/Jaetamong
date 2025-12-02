#include <stdio.h>

int main() {
    char s[10];
    scanf("%s", s);
    if (s[0] == 'F') printf("Foundation");
    else if (s[0] == 'C') printf("Claves");
    else if (s[0] == 'V') printf("Veritas");
    else if (s[0] == 'E') printf("Exploration");
    return 0;
}
