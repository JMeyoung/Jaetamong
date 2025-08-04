#include <stdio.h>

#define MAX_N 1000

int main() {
    int N, a, b;
    scanf("%d %d %d", &N, &a, &b);

    int charms[MAX_N][MAX_N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &charms[i][j]);
        }
    }

    int jinseo_charm = charms[a - 1][b - 1];
    int is_angry = 0;

    for (int j = 0; j < N; j++) {
        if (j == b - 1) {
            continue;
        }
        if (charms[a - 1][j] > jinseo_charm) {
            is_angry = 1;
            break;
        }
    }

    if (!is_angry) {
        for (int i = 0; i < N; i++) {
            if (i == a - 1) {
                continue;
            }
            if (charms[i][b - 1] > jinseo_charm) {
                is_angry = 1;
                break;
            }
        }
    }

    if (is_angry) {
        printf("ANGRY\n");
    } else {
        printf("HAPPY\n");
    }

    return 0;
}