#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int hp, mp, atk, def;
        int dhp, dmp, datk, ddef;
        scanf("%d %d %d %d %d %d %d %d", &hp, &mp, &atk, &def, &dhp, &dmp, &datk, &ddef);
        hp += dhp;
        mp += dmp;
        atk += datk;
        def += ddef;
        if (hp < 1) hp = 1;
        if (mp < 1) mp = 1;
        if (atk < 0) atk = 0;
        int power = hp + mp * 5 + atk * 2 + def * 2;
        printf("%d\n", power);
    }
    return 0;
}
