#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    int arr[1001];
    int index = 1;
    for (int i = 1; index <= 1000; i++) {
        for (int j = 0; j < i && index <= 1000; j++) {
            arr[index++] = i;
        }
    }
    int sum = 0;
    for (int i = A; i <= B; i++) {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}