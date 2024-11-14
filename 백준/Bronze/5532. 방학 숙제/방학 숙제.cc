#include <stdio.h>
#include <math.h>

int main() {
    int L, A, B, C, D;
    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);

    int days_korean = (int)ceil((double)A / C);
    int days_math = (int)ceil((double)B / D);

    int max_play_days = L - (days_korean > days_math ? days_korean : days_math);

    printf("%d\n", max_play_days);
    return 0;
}
