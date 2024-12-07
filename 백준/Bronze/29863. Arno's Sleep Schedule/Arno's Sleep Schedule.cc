#include <stdio.h>

int main() {
    int bedtime, alarmtime;
    scanf("%d %d", &bedtime, &alarmtime);

    if (bedtime <= 3) {
        bedtime += 24;
    }

    if (alarmtime <= 3) {
        alarmtime += 24;
    }

    if (alarmtime < bedtime) {
        alarmtime += 24;
    }

    int sleeptime = alarmtime - bedtime;
    printf("%d\n", sleeptime);

    return 0;
}