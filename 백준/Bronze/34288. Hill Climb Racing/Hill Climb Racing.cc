#include <stdio.h>

int main() {
    int l, a;
    scanf("%d %d", &l, &a);

    int prev_h, current_h;
    
    scanf("%d", &prev_h);

    for (int i = 0; i < l; i++) {
        scanf("%d", &current_h);
        
        int diff = current_h - prev_h;
        
        if (diff > a) {
            printf("BUG REPORT\n");
            return 0;
        }
        
        prev_h = current_h;
    }

    printf("POSSIBLE\n");
    return 0;
}