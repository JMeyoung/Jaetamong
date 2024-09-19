#include <stdio.h>

int main() {
    int numbers[9]; 
    int max = 0; 
    int index = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > max) {
            max = numbers[i];
            index = i + 1;
        }
    }

    printf("%d\n%d\n", max, index);
    return 0;
}