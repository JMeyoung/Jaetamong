#include <stdio.h>

int main() {
    int train = 0, max_train = 0, out, in;

    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &out, &in);
        train = train - out + in;  
        if (train > max_train) {
            max_train = train;
        }
    }

    printf("%d\n", max_train);
    return 0;
}