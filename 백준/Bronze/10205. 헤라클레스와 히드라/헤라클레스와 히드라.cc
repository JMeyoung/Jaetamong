#include <stdio.h>
#include <string.h>

int main() {
    int K;
    scanf("%d", &K);
    for (int t = 1; t <= K; t++) {
        int h;
        char cmd[101];
        scanf("%d", &h);
        scanf("%s", cmd);
        int len = strlen(cmd);
        for (int i = 0; i < len; i++) {
            if (cmd[i] == 'c') {
                h += 1;
            } else if (cmd[i] == 'b') {
                h -= 1;
            }
        }
        printf("Data Set %d:\n%d\n\n", t, h);
    }
    return 0;
}