#include <stdio.h>

int main() {
    int HH, MM;
    scanf("%d %d", &HH, &MM);

    int time_spent = (HH - 9) * 60 + MM;
    
    printf("%d\n", time_spent);
    return 0;
}