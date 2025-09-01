#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int h[9], sum = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &h[i]);
        sum += h[i];
    }
    int x, y;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - h[i] - h[j] == 100) {
                x = i; y = j;
                goto found;
            }
        }
    }
found:
    int result[7], idx = 0;
    for (int i = 0; i < 9; i++) {
        if (i == x || i == y) continue;
        result[idx++] = h[i];
    }
    qsort(result, 7, sizeof(int), compare);
    for (int i = 0; i < 7; i++) printf("%d\n", result[i]);
    return 0;
}
