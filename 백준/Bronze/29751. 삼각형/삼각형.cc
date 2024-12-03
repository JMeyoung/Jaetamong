#include <stdio.h>

int main() {
    int W, H;
    scanf("%d %d", &W, &H);

    double area = (W * H) / 2.0;
    printf("%.1lf\n", area);

    return 0;
}
