#include <stdio.h>

int main() {
    int N, F;
    scanf("%d %d", &N, &F);
    int newN = (N / 100) * 100;
    while (newN % F != 0) {
        newN++;
    }
    printf("%02d\n", newN % 100);
    return 0;
}