#include <stdio.h>
#include <string.h>

int main() {
    char input[10];
    scanf("%9s", input); 

    if (strcmp(input, "NLCS") == 0) {
        printf("North London Collegiate School\n");
    } else if (strcmp(input, "BHA") == 0) {
        printf("Branksome Hall Asia\n");
    } else if (strcmp(input, "KIS") == 0) {
        printf("Korea International School\n");
    } else if (strcmp(input, "SJA") == 0) {
        printf("St. Johnsbury Academy\n");
    }

    return 0;
}