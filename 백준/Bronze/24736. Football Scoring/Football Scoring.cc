#include <stdio.h>

int calc_score(int t, int f, int s, int p, int c) {
    return 6 * t + 3 * f + 2 * s + 1 * p + 2 * c;
}

int main() {
    int a_t, a_f, a_s, a_p, a_c;
    int h_t, h_f, h_s, h_p, h_c;

    scanf("%d %d %d %d %d", &a_t, &a_f, &a_s, &a_p, &a_c);
    scanf("%d %d %d %d %d", &h_t, &h_f, &h_s, &h_p, &h_c);

    int away_score = calc_score(a_t, a_f, a_s, a_p, a_c);
    int home_score = calc_score(h_t, h_f, h_s, h_p, h_c);

    printf("%d %d\n", away_score, home_score);

    return 0;
}