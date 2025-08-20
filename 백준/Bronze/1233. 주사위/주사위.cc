#include <stdio.h>

int main() {
    int S1, S2, S3;
    scanf("%d %d %d", &S1, &S2, &S3);
    
    int sums[81] = {0}; 
    
    for (int i = 1; i <= S1; i++) {
        for (int j = 1; j <= S2; j++) {
            for (int k = 1; k <= S3; k++) {
                sums[i + j + k]++;
            }
        }
    }
    
    int maxCount = 0;
    int result = 0;
    
    for (int i = 3; i <= S1 + S2 + S3; i++) {
        if (sums[i] > maxCount) {
            maxCount = sums[i];
            result = i;
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}