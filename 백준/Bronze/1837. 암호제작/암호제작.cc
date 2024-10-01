#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// 에라토스테네스의 체로 K보다 작은 소수 구하기
void sieve(bool prime[], int K) {
    for (int i = 2; i < K; i++) {
        prime[i] = true;
    }
    for (int i = 2; i * i < K; i++) {
        if (prime[i]) {
            for (int j = i * i; j < K; j += i) {
                prime[j] = false;
            }
        }
    }
}

// 큰 숫자 P를 소수로 나누어떨어지는지 확인하는 함수
int mod_large_num(const char* P, int prime) {
    int result = 0;
    for (int i = 0; P[i] != '\0'; i++) {
        result = (result * 10 + (P[i] - '0')) % prime;
    }
    return result;
}

int main() {
    char P[101];  // P는 매우 클 수 있으므로 문자열로 입력받음
    int K;
    scanf("%s %d", P, &K);

    bool prime[K];
    sieve(prime, K);

    // K보다 작은 소수들로 나누어떨어지는지 확인
    for (int i = 2; i < K; i++) {
        if (prime[i]) {
            if (mod_large_num(P, i) == 0) {
                printf("BAD %d\n", i);
                return 0;
            }
        }
    }

    printf("GOOD\n");
    return 0;
}