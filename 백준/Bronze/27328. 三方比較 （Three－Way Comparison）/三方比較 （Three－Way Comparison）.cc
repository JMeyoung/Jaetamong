#include <stdio.h>

int main() {
    int A, B;
    scanf("%d\n %d\n", &A, &B);
if (A < B)
    printf("-1");
else if (A == B)
    printf("0");
else
    printf("1");
    return 0;
}