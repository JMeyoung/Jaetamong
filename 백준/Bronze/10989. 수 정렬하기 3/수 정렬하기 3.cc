#include <stdio.h>

int main() {
    int n, i, j;
    int counts[10001] = {0};
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        counts[num]++;
    }
    
    for (i = 1; i <= 10000; i++) {
        for (j = 0; j < counts[i]; j++) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}