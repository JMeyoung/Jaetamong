#include <stdio.h>
#include <string.h>

int main() {
    int h, m;
    char am_pm[3];
    int travel_minutes;

    scanf("%d:%d %s", &h, &m, am_pm);
    scanf("%d", &travel_minutes);

    int h_24 = h;
    if (strcmp(am_pm, "PM") == 0 && h != 12) {
        h_24 += 12;
    }
    if (strcmp(am_pm, "AM") == 0 && h == 12) {
        h_24 = 0; 
    }

    int meeting_total_minutes = (h_24 * 60) + m;

    int departure_total_minutes = meeting_total_minutes - travel_minutes;

    departure_total_minutes = (departure_total_minutes % 1440 + 1440) % 1440;

    int departure_h_24 = departure_total_minutes / 60;
    int departure_m = departure_total_minutes % 60;

    char departure_am_pm[3];
    if (departure_h_24 >= 12) {
        strcpy(departure_am_pm, "PM");
    } else {
        strcpy(departure_am_pm, "AM");
    }

    int departure_h_12 = departure_h_24 % 12;
    if (departure_h_12 == 0) {
        departure_h_12 = 12;
    }

    printf("%d:%02d %s\n", departure_h_12, departure_m, departure_am_pm);

    return 0;
}