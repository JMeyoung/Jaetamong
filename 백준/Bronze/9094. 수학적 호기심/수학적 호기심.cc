#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, cnt = 0;
        scanf("%d %d", &n, &m);
        for (int a = 1; a < n - 1; a++) {
            for (int b = a + 1; b < n; b++) {
                int sum = a * a + b * b + m;
                int mul = a * b;
                if (sum % mul == 0) {
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}