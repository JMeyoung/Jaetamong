#include <stdio.h>

int T(int n) {
    return n * (n + 1) / 2;
}

int W(int n) {
    int sum = 0;
    for (int k = 1; k <= n; k++) {
        sum += k * T(k + 1);
    }
    return sum;
}

int main() {
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("%d\n", W(n));
    }

    return 0;
}
