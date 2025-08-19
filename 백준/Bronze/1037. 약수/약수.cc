#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);
    
    int min = 1000001; 
    int max = 1;
    
    for (int i = 0; i < count; i++) {
        int num;
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    
    int N = min * max;
    printf("%d\n", N);
    
    return 0;
}