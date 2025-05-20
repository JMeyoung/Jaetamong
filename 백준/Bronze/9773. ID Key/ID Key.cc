#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    for (int i = 0; i < N; i++) {
        char num[14]; 
        scanf("%s", num);
        int sum = 0;

        for (int j = 0; j < 13; j++) {
            sum += num[j] - '0';
        }
        int last3 = (num[10] - '0') * 100 + (num[11] - '0') * 10 + (num[12] - '0');
        int mul = last3 * 10;
        int result = sum + mul;
        if (result < 1000) {
            result += 1000;
        }
        if (result > 9999) {
            result %= 10000;
        }
        printf("%04d\n", result);
    }
    return 0;
}