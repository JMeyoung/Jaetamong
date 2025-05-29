#include <stdio.h>

int main() {
    int N, plugs, total = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &plugs);
        total += plugs;
    }
    
    printf("%d\n", total - (N - 1));
    return 0;
}