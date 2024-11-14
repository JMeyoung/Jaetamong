#include <stdio.h>

int main() {
    int sangdeok, jungdeok, hadeok;
    int cola, cider;
    
    scanf("%d", &sangdeok);
    scanf("%d", &jungdeok);
    scanf("%d", &hadeok);
    
    scanf("%d", &cola);
    scanf("%d", &cider);
    
    int min_burger = sangdeok;
    if (jungdeok < min_burger) min_burger = jungdeok;
    if (hadeok < min_burger) min_burger = hadeok;
    
    int min_drink = cola < cider ? cola : cider;
    
    int set_price = min_burger + min_drink - 50;
    
    printf("%d\n", set_price);
    
    return 0;
}
