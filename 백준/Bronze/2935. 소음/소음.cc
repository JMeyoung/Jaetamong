#include <stdio.h>
#include <string.h>

int main() {
    char A[101], B[101], op;
    scanf("%s", A);
    scanf(" %c", &op);
    scanf("%s", B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    if (op == '+') {
        if (lenA == lenB) {
            printf("2");
            for (int i = 1; i < lenA; i++) printf("0");
        } else {
            int big = lenA > lenB ? lenA : lenB;
            int small = lenA < lenB ? lenA : lenB;
            int gap = big - small;

            printf("1");
            for (int i = 1; i < gap; i++) printf("0");
            printf("1");
            for (int i = 1; i < small; i++) printf("0");
        }
    } else if (op == '*') {
        printf("1");
        for (int i = 1; i < lenA + lenB - 1; i++) printf("0");
    }

    printf("\n");
    return 0;
}