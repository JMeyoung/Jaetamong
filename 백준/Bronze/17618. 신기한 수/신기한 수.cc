#include <stdio.h>

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, count = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int sum = digit_sum(i);
        if (i % sum == 0)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
