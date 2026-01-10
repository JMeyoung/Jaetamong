#include <stdio.h>
#include <string.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    char toys[101];
    scanf("%s", toys);

    char boxA[101] = "", boxB[101] = "", boxC[101] = "";
    int cntA = 0, cntB = 0, cntC = 0;

    for (int i = 0; i < N; i++) {
        char t = toys[i];

        int start;
        if (t == 's') start = 0;
        else if (t == 'r') start = 1;
        else start = 2;

        for (int step = 0; step < 3; step++) {
            int box = (start + step) % 3;
            if (box == 0 && cntA < K) {
                boxA[cntA++] = t;
                boxA[cntA] = '\0';
                break;
            }
            if (box == 1 && cntB < K) {
                boxB[cntB++] = t;
                boxB[cntB] = '\0';
                break;
            }
            if (box == 2 && cntC < K) {
                boxC[cntC++] = t;
                boxC[cntC] = '\0';
                break;
            }
        }
    }

    printf("%s\n%s\n%s\n", boxA, boxB, boxC);
    return 0;
}
