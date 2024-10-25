#include <stdio.h>

int main() {
    int beer, malt, wine, soda, seltzer, water;
    
    scanf("%d %d %d %d %d %d", &beer, &malt, &wine, &soda, &seltzer, &water);
    
    int total = (beer + malt + wine + soda + seltzer + water) * 5;
    
    printf("%d\n", total);
    
    return 0;
}
