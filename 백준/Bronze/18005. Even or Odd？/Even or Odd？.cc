#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    if (n % 2 == 1) {
        printf("0\n");
    }
    else {
        if ((n/2) % 2 == 1) {
            printf("1\n");
        }
        else {
            printf("2\n");
        }
    }
    
    return 0;
}
