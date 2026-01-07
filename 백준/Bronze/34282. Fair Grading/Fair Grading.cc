#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int sum = x + y + 2 * z;

    if (sum >= 360) printf("A");
    else if (sum >= 320) printf("B");
    else if (sum >= 280) printf("C");
    else if (sum >= 240) printf("D");
    else printf("F");

    return 0;
}
