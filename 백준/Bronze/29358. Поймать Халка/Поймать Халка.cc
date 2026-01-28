#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[3];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int b[3], c[3];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) ans++;
        if (c[i] < a[i]) ans++;
    }

    printf("%d\n", ans);
    return 0;
}
