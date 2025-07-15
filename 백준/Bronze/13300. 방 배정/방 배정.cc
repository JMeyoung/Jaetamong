#include <stdio.h>

int main() {
    int N, K;
    int count[2][7] = {0};

    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        int S, Y;
        scanf("%d %d", &S, &Y);
        count[S][Y]++;
    }

    int rooms = 0;
    for (int s = 0; s <= 1; s++) {
        for (int y = 1; y <= 6; y++) {
            if (count[s][y] > 0) {
                rooms += (count[s][y] + K - 1) / K; 
            }
        }
    }

    printf("%d\n", rooms);
    return 0;
}