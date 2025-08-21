#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / gcd(a, b);
}

int main() {
    long long nums[5];
    for (int i = 0; i < 5; i++) {
        scanf("%lld", &nums[i]);
    }

    long long min_lcm = -1;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                long long current_lcm = lcm(lcm(nums[i], nums[j]), nums[k]);
                
                if (min_lcm == -1 || current_lcm < min_lcm) {
                    min_lcm = current_lcm;
                }
            }
        }
    }

    printf("%lld\n", min_lcm);

    return 0;
}