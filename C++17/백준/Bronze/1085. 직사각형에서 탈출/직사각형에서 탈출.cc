#include <stdio.h>
int main(void){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int Leftside = x;
    int Rightside = w - x;
    int Downside = y;
    int Upside = h - y;

    int minimum_value = Leftside;
    if (Rightside < minimum_value){
        minimum_value = Rightside;
    }
    if (Downside < minimum_value){
        minimum_value = Downside;
    }
    if (Upside < minimum_value){
        minimum_value = Upside;
    }

    printf("%d\n", minimum_value);

    return 0;
}