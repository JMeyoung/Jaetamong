#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);
    int min = (H * 60) + M;

    printf("%d\n", min);
    return 0;
} 