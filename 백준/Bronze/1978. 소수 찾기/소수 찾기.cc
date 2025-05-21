#include <stdio.h>

int Prime(int num) {
    if (num < 2) 
    return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
    }

int main() {
    int N, count = 0, num;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (Prime(num)) count++;
    }
    printf("%d", count);

}