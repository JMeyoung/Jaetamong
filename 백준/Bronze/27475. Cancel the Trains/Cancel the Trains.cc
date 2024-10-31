#include <stdio.h>

int main() {
    int test_case, n, m;
    scanf("%d", &test_case);

    for (int t = 0; t < test_case; t++) {
        scanf("%d %d", &n, &m);
        int bottom_trains[100], left_trains[100];
        
        for (int i = 0; i < n; i++)
            scanf("%d", &bottom_trains[i]);
        
        for (int i = 0; i < m; i++)
            scanf("%d", &left_trains[i]);
        
        int cancel_count = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (bottom_trains[i] == left_trains[j]) {
                    cancel_count++;
                    break;
                }
            }
        }
        
        printf("%d\n", cancel_count);
    }

    return 0;
}
