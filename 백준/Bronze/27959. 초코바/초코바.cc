#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    if ( N * 100 >= M)
        printf("Yes");
    else if ( N * 100 < M)
        printf("No");
    return 0;
}