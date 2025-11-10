#include <stdio.h>

int main(void) {
    int s;
    scanf("%d", &s);

    int needed_seconds = 3600 - (s % 3600);
    int sleep = (needed_seconds + 59) / 60;

    printf("%d\n", sleep);
    return 0;
}