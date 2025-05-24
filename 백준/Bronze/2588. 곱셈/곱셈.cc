#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    int B1 = B % 10;
    int B2 = (B / 10) % 10;
    int B3 = B / 100;
    
    printf("%d\n", A * B1);
    printf("%d\n", A * B2);
    printf("%d\n", A * B3);
    printf("%d\n", A * B);

    return 0;
}