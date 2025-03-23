#include <stdio.h>

int main() {
    int n, original, current, count = 0;

    scanf("%d", &n);
    original = n;
    current = n;

    do {
        int left = current / 10;
        int right = current % 10;
        int sum = left + right;
        current = (right * 10) + (sum % 10);
        count++;
    } while (current != original);

    printf("%d\n", count);
    return 0;
}
