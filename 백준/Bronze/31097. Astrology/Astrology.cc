#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);

    int md = m * 100 + d;

    if (md >= 321 && md <= 419) printf("Aries");
    else if (md >= 420 && md <= 520) printf("Taurus");
    else if (md >= 521 && md <= 620) printf("Gemini");
    else if (md >= 621 && md <= 722) printf("Cancer");
    else if (md >= 723 && md <= 822) printf("Leo");
    else if (md >= 823 && md <= 922) printf("Virgo");
    else if (md >= 923 && md <= 1022) printf("Libra");
    else if (md >= 1023 && md <= 1122) printf("Scorpio");
    else if (md >= 1123 && md <= 1221) printf("Sagittarius");
    else if (md >= 1222 || md <= 119) printf("Capricorn");
    else if (md >= 120 && md <= 218) printf("Aquarius");
    else if (md >= 219 && md <= 320) printf("Pisces");

    return 0;
}
