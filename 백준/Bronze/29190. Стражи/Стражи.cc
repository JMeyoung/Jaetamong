#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    int x, y;
    int k;

    scanf("%d %d", &n, &m);
    scanf("%d %d", &x, &y);
    scanf("%d", &k);

    x--;
    y--;

    long long count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == x && j == y)
                continue;

            if (abs(i - x) + abs(j - y) <= k)
                count++;
        }
    }

    printf("%lld\n", count);
    return 0;
}
