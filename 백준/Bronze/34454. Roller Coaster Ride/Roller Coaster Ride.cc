#include <stdio.h>

int main() {
    int N, C, P;
    scanf("%d", &N);
    scanf("%d", &C);
    scanf("%d", &P);

    int capacity = C * P;
    if (N <= capacity)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
