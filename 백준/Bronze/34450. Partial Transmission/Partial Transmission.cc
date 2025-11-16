#include <stdio.h>

int main(void) {
    int n, p;
    
    scanf("%d", &n);
    scanf("%d", &p);
    
    int expected_sum = 0;
    for (int i = 0; i < n; i++) {
        expected_sum += (p + i);
    }
    
    int actual_sum = 0;
    int num;
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        actual_sum += num;
    }
    
    int missing_number = expected_sum - actual_sum;
    
    printf("%d\n", missing_number);
    
    return 0;
}