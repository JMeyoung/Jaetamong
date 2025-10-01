#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int seat[101] = {0};
    int reject = 0;

    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        if (seat[x]) reject++;
        else seat[x] = 1;
    }

    printf("%d\n", reject);
    return 0;
}