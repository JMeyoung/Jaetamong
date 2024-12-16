#include <stdio.h>

int main() {
    int speed_limit, recorded_speed;
    scanf("%d", &speed_limit);
    scanf("%d", &recorded_speed);

    int over_speed = recorded_speed - speed_limit;

    if (over_speed <= 0) {
        printf("Congratulations, you are within the speed limit!\n");
    } else if (over_speed <= 20) {
        printf("You are speeding and your fine is $100.\n");
    } else if (over_speed <= 30) {
        printf("You are speeding and your fine is $270.\n");
    } else {
        printf("You are speeding and your fine is $500.\n");
    }

    return 0;
}
