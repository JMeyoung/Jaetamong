#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);

    int hanyang = A + C;
    int yongdap = B + D;

    if (hanyang < yongdap)
        printf("Hanyang Univ.\n");
    else if (hanyang > yongdap)
        printf("Yongdap\n");
    else
        printf("Either\n");

    return 0;
}
