#include <stdio.h>

int main(void) {
    while (1) {
        int a;
        scanf("%d", &a);
        if (a == 0) break;
        int leaves = 1;
        for (int i = 0; i < a; ++i) {
            int splitting_factor, pruned_branches;
            scanf("%d %d", &splitting_factor, &pruned_branches);
            leaves = leaves * splitting_factor - pruned_branches;
        }
        printf("%d\n", leaves);
    }
    return 0;
}
