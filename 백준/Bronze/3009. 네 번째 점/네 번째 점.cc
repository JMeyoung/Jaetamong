#include <stdio.h>

int main() {
    int x[3], y[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int result_x, result_y;

    if (x[0] == x[1]) result_x = x[2];
    else if (x[0] == x[2]) result_x = x[1];
    else result_x = x[0];

    if (y[0] == y[1]) result_y = y[2];
    else if (y[0] == y[2]) result_y = y[1];
    else result_y = y[0];

    printf("%d %d\n", result_x, result_y);
    return 0;
}