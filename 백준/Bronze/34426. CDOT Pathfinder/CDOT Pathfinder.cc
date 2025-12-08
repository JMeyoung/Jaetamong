#include <stdio.h>

int main() {
    int legs;
    scanf("%d", &legs);

    for (int i = 0; i < legs; i++) {
        int routes;
        scanf("%d", &routes);

        int bestIndex = 1;
        double bestTime = 1e18;

        for (int r = 1; r <= routes; r++) {
            double speed, dist;
            scanf("%lf %lf", &speed, &dist);
            double time = dist / speed;
            if (time < bestTime) {
                bestTime = time;
                bestIndex = r;
            }
        }

        printf("%d\n", bestIndex);
    }

    return 0;
}
