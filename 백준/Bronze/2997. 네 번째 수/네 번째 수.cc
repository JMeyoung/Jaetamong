#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int numbers[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }

    qsort(numbers, 3, sizeof(int), compare);

    int d1 = numbers[1] - numbers[0];
    int d2 = numbers[2] - numbers[1];

    if (d1 == d2) {
        printf("%d\n", numbers[2] + d1);
    } else if (d1 < d2) {
        printf("%d\n", numbers[1] + d1);
    } else {
        printf("%d\n", numbers[0] + d2);
    }

    return 0;
}
