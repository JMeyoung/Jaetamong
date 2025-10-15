#include <stdio.h>

int main() {
    int t, sum = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &t);
        sum += t;
    }

    sum += 300;
    if (sum <= 1800)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
