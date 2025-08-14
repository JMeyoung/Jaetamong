#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a, b, c, d;

    while (scanf("%lld %lld %lld %lld", &a, &b, &c, &d) == 4) {
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        }

        int count = 0;
        while (!(a == b && b == c && c == d)) {
            long long temp_a = llabs(a - b);
            long long temp_b = llabs(b - c);
            long long temp_c = llabs(c - d);
            long long temp_d = llabs(d - a);

            a = temp_a;
            b = temp_b;
            c = temp_c;
            d = temp_d;
            count++;
        }
        
        printf("%d\n", count);
    }

    return 0;
}