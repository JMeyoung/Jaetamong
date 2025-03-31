#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int x, y;
    int minX = INT_MAX, maxX = INT_MIN;
    int minY = INT_MAX, maxY = INT_MIN;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (x < minX) minX = x;
        if (x > maxX) maxX = x;
        if (y < minY) minY = y;
        if (y > maxY) maxY = y;
    }

    int width = maxX - minX;
    int height = maxY - minY;
    int area = width * height;

    printf("%d\n", area);

    return 0;
}
