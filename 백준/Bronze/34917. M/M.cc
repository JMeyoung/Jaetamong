#include <stdio.h>
#include <string.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        int N;
        scanf("%d", &N);
        int mid = N / 2;

        for (int i = 0; i < N; i++) {
            char row[60];
            memset(row, '.', N);
            row[N] = '\0';

            row[0] = '#';
            row[N - 1] = '#';

            if (i <= mid) {
                row[i] = '#';
                row[N - 1 - i] = '#';
            }

            puts(row);
        }
    }
    return 0;
}
