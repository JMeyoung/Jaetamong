#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[129];
        scanf("%s", s);

        int w;
        scanf("%d", &w);

        char best[129];
        int bestDiff = 1000000000;

        for (int i = 0; i < w; i++) {
            char d[129];
            scanf("%s", d);

            int diff = 0;
            for (int j = 0; s[j]; j++) {
                if (s[j] != d[j]) diff++;
            }

            if (diff < bestDiff) {
                bestDiff = diff;
                strcpy(best, d);
            }
        }

        printf("%s\n", best);
    }

    return 0;
}
