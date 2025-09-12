#include <stdio.h>

int main(void) {
    int N, M;
    char map[55][55];
    int rowEmpty = 0, colEmpty = 0;

    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%s", map[i]);
    }

    for (int i = 0; i < N; i++) {
        int hasGuard = 0;
        for (int j = 0; j < M; j++) {
            if (map[i][j] == 'X') { hasGuard = 1; break; }
        }
        if (!hasGuard) rowEmpty++;
    }

    for (int j = 0; j < M; j++) {
        int hasGuard = 0;
        for (int i = 0; i < N; i++) {
            if (map[i][j] == 'X') { hasGuard = 1; break; }
        }
        if (!hasGuard) colEmpty++;
    }

    printf("%d\n", (rowEmpty > colEmpty) ? rowEmpty : colEmpty);
    return 0;
}
