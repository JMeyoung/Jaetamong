#include <stdio.h>

int main() {
    int x, y, n;
    double min_price_per_gram;

    scanf("%d %d", &x, &y);
    min_price_per_gram = (double)x / y;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int xi, yi;
        scanf("%d %d", &xi, &yi);

        double price_per_gram = (double)xi / yi;
        if (price_per_gram < min_price_per_gram) {
            min_price_per_gram = price_per_gram;
        }
    }

    printf("%.2lf\n", min_price_per_gram * 1000);

    return 0;
}