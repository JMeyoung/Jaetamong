#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int pos = 0, neg = 0, abst = 0;
    for (int i = 0; i < N; i++) {
        int v; scanf("%d", &v);
        if (v == 1) pos++;
        else if (v == -1) neg++;
        else abst++;
    }

    if (abst * 2 >= N) {
        puts("INVALID");
    } else if (pos > neg) {
        puts("APPROVED");
    } else {
        puts("REJECTED");
    }
    return 0;
}
