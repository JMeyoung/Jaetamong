#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            int x;
            scanf("%d", &x);
            if (x == 0) count++;
        }

        if (count == 1) printf("A\n");
        else if (count == 2) printf("B\n");
        else if (count == 3) printf("C\n");
        else if (count == 4) printf("D\n");
        else printf("E\n");
    }
    return 0;
}