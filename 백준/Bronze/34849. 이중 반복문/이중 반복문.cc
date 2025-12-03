#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if ((long long)N * N <= 100000000) {
        printf("Accepted\n");
    } else {
        printf("Time limit exceeded\n");
    }
    
    return 0;
}
