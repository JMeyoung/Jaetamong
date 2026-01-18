#include <stdio.h>

int main() {
    int N;
    int caseNum = 1;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        double revenue = 0.0;
        double cost = 0.0;

        for (int i = 0; i < N; i++) {
            int c, b, l, n;
            scanf("%d %d %d %d", &c, &b, &l, &n);

            revenue += c * 0.80 + b * 1.00 + l * 1.20 + n * 0.80;

            double kgChicken = c / 85.0;
            double kgBeef = b / 85.0;
            double kgLamb = l / 85.0;

            cost += kgChicken * 7.50;
            cost += kgBeef * 24.00;
            cost += kgLamb * 32.00;

            cost += (kgChicken + kgBeef + kgLamb) * 8.00;

            cost += n * 0.20;
        }

        double net = revenue - cost;
        printf("Case #%d: RM%.2f\n", caseNum++, net);
    }

    return 0;
}
