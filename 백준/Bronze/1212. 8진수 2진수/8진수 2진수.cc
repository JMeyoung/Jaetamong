#include <stdio.h>
#include <string.h>

int main() {
    char oct[333335];
    scanf("%s", oct);

    if (strcmp(oct, "0") == 0) {
        printf("0\n");
        return 0;
    }

    char *bin[8] = {
        "000","001","010","011","100","101","110","111"
    };

    int first = oct[0] - '0';
    int started = 0;

    for (int i = 2; i >= 0; i--) {
        if ((first >> i) & 1) started = 1;
        if (started) printf("%d", (first >> i) & 1);
    }

    for (int i = 1; oct[i]; i++) {
        printf("%s", bin[oct[i] - '0']);
    }

    printf("\n");
    return 0;
}
