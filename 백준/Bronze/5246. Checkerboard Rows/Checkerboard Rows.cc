#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int k;
        scanf("%d", &k);

        int rowCount[9] = {0};

        for (int i = 0; i < k; i++) {
            int c, r;
            scanf("%d %d", &c, &r);
            rowCount[r]++;
        }

        int maxRow = 0;
        for (int i = 1; i <= 8; i++) {
            if (rowCount[i] > maxRow) {
                maxRow = rowCount[i];
            }
        }

        printf("%d\n", maxRow);
    }

    return 0;
}
