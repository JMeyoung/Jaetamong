#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    int s[1001];
    for (int i = 0; i < N; i++) {
        scanf("%d", &s[i]);
    }
    int max_streak = 0, curr_streak = 0;
    for (int i = 0; i < N; i++) {
        if (s[i] >= 1) {
            curr_streak++;
            if (curr_streak > max_streak) {
                max_streak = curr_streak;
            }
        } else {
            curr_streak = 0;
        }
    }
    printf("%d\n", max_streak);
    return 0;
}
