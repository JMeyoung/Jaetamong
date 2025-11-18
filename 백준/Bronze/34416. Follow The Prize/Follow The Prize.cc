#include <stdio.h>

int main() {
    int n, prize_pos, m;
    scanf("%d", &n);
    scanf("%d", &prize_pos);
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (prize_pos == a) {
            prize_pos = b;
        } else if (prize_pos == b) {
            prize_pos = a;
        }
    }

    printf("%d\n", prize_pos);
    return 0;
}
