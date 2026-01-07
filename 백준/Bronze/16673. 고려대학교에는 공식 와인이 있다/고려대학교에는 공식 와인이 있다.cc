#include <stdio.h>

int main() {
    int C, K, P;
    int total_wine = 0;

    scanf("%d %d %d", &C, &K, &P);

    for (int n = 0; n <= C; n++) {
        total_wine += K * n + P * n * n;
    }

    printf("%d\n", total_wine);
    
    return 0;
}
