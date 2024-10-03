#include <stdio.h>

int main() {
    int num, failed = 0;
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num);
        if (num == 9) {
            failed = 1;
        }
    }
    
    if (failed) {
        printf("F\n");
    } else {
        printf("S\n");
    }
    
    return 0;
}