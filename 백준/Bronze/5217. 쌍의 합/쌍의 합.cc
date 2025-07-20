#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        printf("Pairs for %d: ", n);
        int first = 1;
        
        for (int i = 1; i <= n/2; i++) {
            int j = n - i;
            if (i < j) {
                if (!first) printf(", ");
                printf("%d %d", i, j);
                first = 0;
            }
        }
        printf("\n");
    }
    
    return 0;
}