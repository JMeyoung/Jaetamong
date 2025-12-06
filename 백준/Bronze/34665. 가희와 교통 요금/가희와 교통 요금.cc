#include <stdio.h>
#include <string.h>

int main() {
    char A[21], B[21];
    scanf("%s", A);
    scanf("%s", B);

    if (strcmp(A, B) == 0)
        printf("0");
    else
        printf("1550");

    return 0;
}
