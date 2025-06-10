#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[20];
    int contains7 = 0;

    scanf("%d", &n);
    sprintf(str, "%d", n);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '7') {
            contains7 = 1;
            break;
        }
    }

    if (contains7 && n % 7 == 0) {
        printf("3\n");
    } else if (!contains7 && n % 7 == 0) {
        printf("1\n");
    } else if (contains7 && n % 7 != 0) {
        printf("2\n");
    } else {
        printf("0\n");
    }

    return 0;
}