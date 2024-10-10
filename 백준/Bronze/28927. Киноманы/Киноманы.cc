#include <stdio.h>

int main(void)
{
    int t1, f1, e1, t2, f2, e2;
    scanf("%d %d %d %d %d %d", &t1, &e1, &f1, &t2, &e2, &f2);
    int p1 = 3 * t1 + 20 * e1 + 120 * f1;
    int p2 = 3 * t2 + 20 * e2 + 120 * f2;

    if (p1 > p2)
        printf("Max");
    else if (p1 < p2)
        printf("Mel");
    else
        printf("Draw");
    
    return 0;
}