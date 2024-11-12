#include <stdio.h>

int main() {
    int sum, diff;
    scanf("%d %d", &sum, &diff);

    int team1 = (sum + diff) / 2;
    int team2 = sum - team1;

    if (team1 < 0 || team2 < 0 || (sum + diff) % 2 != 0) {
        printf("-1\n");
    } else {
        printf("%d %d\n", team1, team2);
    }

    return 0;
}
