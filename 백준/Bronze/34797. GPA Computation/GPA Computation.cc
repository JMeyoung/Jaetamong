#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total = n;
    double sum = 0.0;
    double bonus = 0.0;

    for (int i = 0; i < total; i++) {
        char grade, tier;
        scanf(" %c%c", &grade, &tier);

        int base = 0;
        if (grade == 'A') base = 4;
        else if (grade == 'B') base = 3;
        else if (grade == 'C') base = 2;
        else if (grade == 'D') base = 1;

        sum += base;

        if (grade == 'A' || grade == 'B' || grade == 'C') {
            if (tier == '1') bonus += 0.05;
            else if (tier == '2') bonus += 0.025;
        }
    }

    printf("%.15f\n", sum / total + bonus);
    return 0;
}
