#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int even = 0;
    int odd = 0;
    int number;

    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    if (even > odd) {
        printf("Happy\n");
    } else {
        printf("Sad\n");
    }

    return 0;
}