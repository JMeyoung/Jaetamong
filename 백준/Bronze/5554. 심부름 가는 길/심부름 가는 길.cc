#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int total_seconds = a + b + c + d;
    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;

    printf("%d\n%d\n", minutes, seconds);
    return 0;
}
