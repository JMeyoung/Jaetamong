#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int min_bags = -1;

    for (int i = N/5; i >= 0; i--) { // i는 5kg 봉지의 개수
        int remain_weight = N - 5 * i;

        if (remain_weight < 0) {
            continue;
        }
        if  (remain_weight % 3 == 0) {
        int total_3kg_bag = remain_weight / 3;
        min_bags = i + total_3kg_bag;
        break;
        }
    } 

    printf("%d\n", min_bags);

    return 0;
    }