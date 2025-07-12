#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    double price[5] = {350.34, 230.90, 190.55, 125.30, 180.90};

    for (int i = 0; i < T; i++) {
        int cnt[5];
        double sum = 0;
        for (int j = 0; j < 5; j++) {
            scanf("%d", &cnt[j]);
            sum += cnt[j] * price[j];
        }
        printf("$%.2lf\n", sum);
    }
    return 0;
}