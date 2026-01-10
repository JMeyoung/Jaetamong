#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d:%d", &a, &b);
    scanf("%d:%d", &c, &d);

    if (d <= b && c <= a)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
