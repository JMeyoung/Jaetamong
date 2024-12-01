#include <stdio.h>

int main(){
    int a, w, v;
    scanf("%d %d %d", &a, &w, &v);
    int ampere = w / v;
    if (ampere >= a) {
        printf("1\n");
    }
    else
        printf("0\n");
    
    return 0;
}