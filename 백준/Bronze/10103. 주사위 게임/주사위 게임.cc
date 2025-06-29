#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int chang_score = 100;
    int sang_score = 100;
    
    for (int i = 0; i < n; i++) {
        int chang_dice, sang_dice;
        scanf("%d %d", &chang_dice, &sang_dice);
        
        if (chang_dice > sang_dice) {
            sang_score -= chang_dice;
        } else if (sang_dice > chang_dice) {
            chang_score -= sang_dice;
        }
    }
    
    printf("%d\n", chang_score);
    printf("%d\n", sang_score);
    
    return 0;
} 