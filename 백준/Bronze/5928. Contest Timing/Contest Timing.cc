#include <stdio.h>

int main() {
    int D, H, M;
    scanf("%d %d %d", &D, &H, &M);

    int start_day = 11, start_hour = 11, start_minute = 11;

    int total_start_minutes = (start_day * 24 * 60) + (start_hour * 60) + start_minute;
    int total_end_minutes = (D * 24 * 60) + (H * 60) + M;

    if (total_end_minutes < total_start_minutes) {
        printf("-1\n");
    } else {
        printf("%d\n", total_end_minutes - total_start_minutes);
    }

    return 0;
}
