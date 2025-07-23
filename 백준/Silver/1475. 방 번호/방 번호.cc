#include <stdio.h>
#include <string.h>

int main() {
    char num[7];
    int count[10] = {0};
    scanf("%s", num);

    for (int i = 0; num[i]; i++) {
        int n = num[i] - '0';
        count[n]++;
    }

    // 6과 9는 합쳐서 계산
    int six_nine = (count[6] + count[9] + 1) / 2;
    int max = six_nine;
    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) continue;
        if (count[i] > max) max = count[i];
    }

    printf("%d\n", max);
    return 0;
}