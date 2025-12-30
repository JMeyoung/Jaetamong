#include <stdio.h>

int main() {
    int l, n;
    double t, f, b, total_time;
    
    scanf("%d %d", &l, &n);
    scanf("%lf", &t);
    
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &f, &b);
        total_time = (l / f) + (l / b);
        
        if (total_time < t) {
            printf("HOPE\n");
            return 0;
        }
    }
    
    printf("DOOMED\n");
    
    return 0;
}
