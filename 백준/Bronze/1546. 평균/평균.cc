#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int scores[N]; 
    int max_score = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }

    double sum = 0.0;

    for (int i = 0; i < N; i++) {
        sum += ((double)scores[i] / max_score) * 100;
    }

    double new_average = sum / N;
    printf("%f\n", new_average);

    return 0;
}
