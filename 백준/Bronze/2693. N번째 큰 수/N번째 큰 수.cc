#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int arr[10];
        for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
        qsort(arr, 10, sizeof(int), compare);
        printf("%d\n", arr[2]);
    }
    return 0;
}
