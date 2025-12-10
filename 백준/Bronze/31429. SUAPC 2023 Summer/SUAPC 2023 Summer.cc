#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int solved[] = {0, 12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
    int penalty[] = {0, 1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};

    printf("%d %d", solved[n], penalty[n]);

    return 0;
}