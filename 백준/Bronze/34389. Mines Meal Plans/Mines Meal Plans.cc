#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        char name[50], plan[20];
        int used_swipes;
        double used_money;

        scanf("%s %s %d %lf", name, plan, &used_swipes, &used_money);

        int total_swipes = 0;
        double total_money = 0;

        if (strcmp(plan, "Marble") == 0) {
            total_swipes = 19;
            total_money = 200;
        } else if (strcmp(plan, "Marble+") == 0) {
            total_swipes = 19;
            total_money = 350;
        } else if (strcmp(plan, "Quartz") == 0) {
            total_swipes = 14;
            total_money = 200;
        } else if (strcmp(plan, "Quartz+") == 0) {
            total_swipes = 14;
            total_money = 350;
        }

        int remaining_swipes = total_swipes - used_swipes;
        double remaining_money = total_money - used_money;

        if (remaining_swipes < 0) remaining_swipes = 0;
        if (remaining_money < 0) remaining_money = 0;

        printf("%s %d %.2f ", name, remaining_swipes, remaining_money);

        if (remaining_swipes > 0 && remaining_money > 0)
            printf("Use meal swipe or munch money\n");
        else if (remaining_swipes == 0 && remaining_money > 0)
            printf("Use munch money\n");
        else if (remaining_swipes > 0 && remaining_money == 0)
            printf("Use meal swipe\n");
        else
            printf("Go to Downtown Golden!\n");
    }

    return 0;
}
