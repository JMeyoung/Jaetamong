#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N;
    scanf("%d", &N);

    int max_score = 0;

    for (int i = 0; i < N; i++) {
        int run1, run2;
        int tricks[5];
        scanf("%d %d", &run1, &run2);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &tricks[j]);
        }
        int best_run = (run1 > run2) ? run1 : run2;
        qsort(tricks, 5, sizeof(int), compare);
        int best_tricks = tricks[0] + tricks[1];
        int total = best_run + best_tricks;
        if (total > max_score) {
            max_score = total;
        }
    }
    printf("%d\n", max_score);
    return 0;
}
