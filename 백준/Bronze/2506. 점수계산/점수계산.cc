#include <stdio.h>

int main() {
    int N, score = 0, bonus = 0;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] == 1) {
            bonus++;
            score += bonus;
        } else {
            bonus = 0;
        }
    }

    printf("%d\n", score);
    return 0;
}