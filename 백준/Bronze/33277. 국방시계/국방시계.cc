#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    double total_minutes = 24.0 * 60.0;
    double current_minutes_passed = total_minutes * ((double)M / N);

    int hours = (int)current_minutes_passed / 60;
    int minutes = (int)current_minutes_passed % 60;

    printf("%02d:%02d\n", hours, minutes);

    return 0;
}