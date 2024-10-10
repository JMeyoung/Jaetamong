#include <stdio.h>

int main() {
    int n, sum = 0, num;
    
    // 첫 번째 줄에서 n을 입력 받음
    scanf("%d", &n);

    // 두 번째 줄에서 n개의 숫자를 입력 받아 합산
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    // 이동 방향에 따라 출력
    if (sum > 0) {
        printf("Right\n");
    } else if (sum < 0) {
        printf("Left\n");
    } else {
        printf("Stay\n");
    }

    return 0;
}