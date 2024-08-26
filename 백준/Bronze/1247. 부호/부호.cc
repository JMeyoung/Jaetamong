#include <stdio.h>

int main(){
    int n;
    __int128 sum, a;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &n);
        sum = 0;
        
        for (int j = 0; j < n; j++) {
            long long temp;
            scanf("%lld", &temp);
            a = (__int128)temp;
            sum += a;
        }

        if (sum > 0) puts("+");
        else if (sum < 0) puts("-");
        else puts("0");
    }

    return 0;
}