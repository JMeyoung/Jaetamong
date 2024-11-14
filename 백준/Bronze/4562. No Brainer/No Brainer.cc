#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int A, B;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &A, &B);
        if (A < B)
            printf("NO BRAINS\n");
        else
            printf("MMM BRAINS\n");
    }
    return 0;
}
