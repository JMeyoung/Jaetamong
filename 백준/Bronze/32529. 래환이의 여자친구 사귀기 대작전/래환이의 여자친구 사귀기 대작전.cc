#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int total_loss = 0;
    int start_day = -1;

    for (int i = N - 1; i >= 0; i--) {
        total_loss += A[i];
        if (total_loss >= M) {
            start_day = i + 1;
            break;
        }
    }

    printf("%d\n", start_day);
    return 0;
}
