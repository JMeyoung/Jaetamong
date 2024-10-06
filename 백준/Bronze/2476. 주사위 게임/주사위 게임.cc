#include <stdio.h>

int main() {
    int N, max_prize = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int a, b, c, prize = 0;
        scanf("%d %d %d", &a, &b, &c);

        if (a == b && b == c) {
            prize = 10000 + a * 1000;
        } else if (a == b || a == c) {
            prize = 1000 + a * 100;
        } else if (b == c) {
            prize = 1000 + b * 100;
        } else {
            int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
            prize = max * 100;
        }

        if (prize > max_prize) {
            max_prize = prize;
        }
    }

    printf("%d\n", max_prize);
    return 0;
}