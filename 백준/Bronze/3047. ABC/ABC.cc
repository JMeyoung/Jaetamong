#include <stdio.h>
#include <algorithm>

int main() {
    int arr[3];
    char order[4];

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    
    scanf("%s", order);

    std::sort(arr, arr + 3);

    for (int i = 0; i < 3; i++) {
        if (order[i] == 'A') {
            printf("%d ", arr[0]);
        } else if (order[i] == 'B') {
            printf("%d ", arr[1]);
        } else if (order[i] == 'C') {
            printf("%d ", arr[2]);
        }
    }
    
    printf("\n");
    return 0;
}