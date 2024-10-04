#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int v = n / 5; 
    int i = n % 5;

    for (int j = 0; j < v; j++) {
        printf("V");
    }

    for (int j = 0; j < i; j++) {
        printf("I");
    }

    printf("\n");
    return 0;
}