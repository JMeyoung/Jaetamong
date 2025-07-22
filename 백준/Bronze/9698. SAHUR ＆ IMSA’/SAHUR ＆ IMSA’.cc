#include <stdio.h>

int main() {
    int T, H, M;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &H, &M);
        M -= 45;
        if (M < 0) {
            M += 60;
            H--;
            if (H < 0) H = 23;
        }
        printf("Case #%d: %d %d\n", i, H, M);
    }
    return 0;
}