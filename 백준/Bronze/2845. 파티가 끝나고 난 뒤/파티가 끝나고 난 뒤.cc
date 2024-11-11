#include <stdio.h>

int main() {
    int L, P, total, N;
    scanf("%d %d", &L, &P);
    total = L * P;
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &N);
    if(total < N)
        printf("%d\n",  N - total);
    else if(total == N)
        printf("0\n");
    else
        printf("%d\n", N - total);
    }
    return 0;
}
