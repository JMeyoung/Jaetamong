#include <stdio.h>

int main() {
    long long result = 0;
    long long num;
    char op;

    scanf("%lld", &result);

    while(1) {
        scanf(" %c", &op);
        if (op == '=') {
            break;
        }

        scanf("%lld", &num);

        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else if (op == '*') {
            result *= num;
        } else if (op == '/') {
            result /= num;
        }
    }

    printf("%lld\n", result);

    return 0;
}