#include <stdio.h>

int main() {
    int v[3];
    if (scanf("%2d:%2d:%2d", &v[0], &v[1], &v[2]) != 3) return 0;
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == i) continue;
            int k = 3 - i - j;
            int h = v[i], m = v[j], s = v[k];
            if (1 <= h && h <= 12 && 0 <= m && m <= 59 && 0 <= s && s <= 59) cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}