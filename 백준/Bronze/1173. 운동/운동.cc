#include <stdio.h>

int main() {
    int N, m, M, T, R; 
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

    int current_pulse = m;
    int exercise_time = 0;
    int total_time = 0;

    if (m + T > M) {
        printf("-1\n");
        return 0;
    }

    while (exercise_time < N) {
        total_time++;

        if (current_pulse + T <= M) {
            current_pulse += T;
            exercise_time++;
        } else {
            current_pulse -= R;
            if (current_pulse < m) {
                current_pulse = m;
            }
        }
    }

    printf("%d\n", total_time);

    return 0;
}