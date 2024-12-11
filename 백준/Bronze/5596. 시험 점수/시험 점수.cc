#include <stdio.h>

int main() {
    int mi, mm, ms, me;
    int bi, bm, bs, be;

    scanf("%d %d %d %d", &mi, &mm, &ms, &me);
    scanf("%d %d %d %d", &bi, &bm, &bs, &be);

    int mt = mi + mm + ms + me;
    int bt = bi + bm + bs + be;

    if (mt >= bt) {
        printf("%d\n", mt);
    } else {
        printf("%d\n", bt);
    }

    return 0;
}
