    #include <stdio.h>

    int main() {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);

        int max_teams = 0;

        while (N >= 2 && M >= 1 && N + M >= K + 3) {
            N -= 2;
            M -= 1;
            max_teams++;
        }

        printf("%d\n", max_teams);

        return 0;
    }
