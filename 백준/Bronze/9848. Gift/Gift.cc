#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int prev, curr, gifts = 0;
    scanf("%d", &prev);

    for (int i = 1; i < n; i++) {
        scanf("%d", &curr);
        if (prev - curr >= k) gifts++;
        prev = curr;
    }

    printf("%d\n", gifts);
    return 0;
}
