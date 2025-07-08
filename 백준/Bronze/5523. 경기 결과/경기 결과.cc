#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int a_wins = 0, b_wins = 0;
    
    for (int i = 0; i < N; i++) {
        int a_score, b_score;
        scanf("%d %d", &a_score, &b_score);
        
        if (a_score > b_score) {
            a_wins++;
        } else if (b_score > a_score) {
            b_wins++;
        }
    }
    
    printf("%d %d\n", a_wins, b_wins);
    
    return 0;
}