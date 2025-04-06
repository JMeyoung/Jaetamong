#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int total_credits = 0;
        double total_score = 0.0;

        for (int i = 0; i < n; i++) {
            int credit;
            double grade;
            scanf("%d %lf", &credit, &grade);

            total_credits += credit;
            total_score += credit * grade;
        }

        printf("%d %.1f\n", total_credits, total_score / total_credits);
    }

    return 0;
}
