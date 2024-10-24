#include <stdio.h>

int main() {
    int U, T, R, O;
    scanf(" %d %d %d %d", &U, &T, &R, &O);
    printf("%d\n", U * 56 + T * 24 + R * 14 + O * 6);
    
    return 0;
}