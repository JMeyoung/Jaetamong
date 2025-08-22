#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int min, max;
        int num;

        scanf("%d", &num);
        min = num;
        max = num;

        for (int i = 1; i < N; i++) {
            scanf("%d", &num);
            if (num < min) {
                min = num;
            }
            if (num > max) {
                max = num;
            }
        }
        printf("%d %d\n", min, max);
    }
    return 0;
}