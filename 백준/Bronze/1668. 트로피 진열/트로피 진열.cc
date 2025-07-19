#include <stdio.h>

int arr[50];

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0, right = 0;
    int max = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            left++;
            max = arr[i];
        }
    }

    max = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (arr[i] > max) {
            right++;
            max = arr[i];
        }
    }

    printf("%d\n%d\n", left, right);
    return 0;
}