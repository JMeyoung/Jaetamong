#include <stdio.h>
#include <string.h>

int main() {
    char city1[128], city2[128], cls[8];
    long long miles;
    long long sum = 0;

    while (1) {
        if (scanf("%s", city1) != 1) return 0;

        if (strcmp(city1, "#") == 0)
            break;

        if (strcmp(city1, "0") == 0) {
            printf("%lld\n", sum);
            sum = 0;
            continue;
        }

        scanf("%s %lld %s", city2, &miles, cls);

        if (cls[0] == 'F') {
            sum += miles * 2;
        } else if (cls[0] == 'B') {
            sum += (miles * 3 + 1) / 2; 
        } else {
            if (miles < 500) sum += 500;
            else sum += miles;
        }
    }

    return 0;
}
