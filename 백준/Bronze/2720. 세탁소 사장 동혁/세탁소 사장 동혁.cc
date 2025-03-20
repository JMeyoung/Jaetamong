#include <stdio.h>

int main() {
    int T, change;
    int coins[4] = {25, 10, 5, 1}; 
    
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &change);
        int result[4] = {0};

        for (int i = 0; i < 4; i++) {
            result[i] = change / coins[i];
            change %= coins[i];
        }

        printf("%d %d %d %d\n", result[0], result[1], result[2], result[3]);
    }

    return 0;
}
