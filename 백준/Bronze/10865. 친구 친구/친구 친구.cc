#include <stdio.h>

int main() {
    int N, M, A, B;
    int friends[100001] = {0}; 
    
    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++) {
        scanf("%d %d", &A, &B);
        friends[A]++;
        friends[B]++; // friends[1] , friends[2] 등등 각각의 i학생들의 친구 수를 저장
    }

    for (int i = 1; i <= N; i++) { // int i = 이 아닌 이유는 friends[1]부터 확인해야 하므로
        printf("%d\n", friends[i]);
    }

    return 0;
}
