#include <stdio.h>

int main() {
    int D, C, R;
    scanf("%d %d %d", &D, &C, &R);

    int fatigue[C];
    int recover[R];

    for (int i = 0; i < C; i++) scanf("%d", &fatigue[i]);
    for (int i = 0; i < R; i++) scanf("%d", &recover[i]);

    int cur = D;
    int i = 0, j = 0;
    int count = 0;

    while (1) {
        if (i < C && cur >= fatigue[i]) {
            cur -= fatigue[i];
            i++;
            count++;
        } else if (j < R) {
            cur += recover[j];
            j++;
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}
