#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int longestStreak = 0, currentStreak = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T);

        if (S > T) {
            currentStreak++;
        } else {
            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
            currentStreak = 0;
        }
    }

    if (currentStreak > longestStreak) {
        longestStreak = currentStreak;
    }

    printf("%d\n", longestStreak);

    return 0;
}
