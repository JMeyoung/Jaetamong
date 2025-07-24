#include <stdio.h>

int main() {
    int N, T;
    scanf("%d %d", &N, &T);

    int cnt = 0, sum = 0, time;
    for (int i = 0; i < N; i++) {
        scanf("%d", &time);
        if (sum + time > T) break;
        sum += time;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}