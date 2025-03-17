#include <stdio.h>

int main() {
    int arr[9][9];
    int max_value = 0;
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max_value) {
                max_value = arr[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("%d\n", max_value);
    printf("%d %d\n", max_row + 1, max_col + 1);

    return 0;
}
