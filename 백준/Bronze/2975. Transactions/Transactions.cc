#include <stdio.h>

int main() {
    int balance;
    char type;
    int amount;
    
    while (1) {
        scanf("%d %c %d", &balance, &type, &amount);
        
        if (balance == 0 && type == 'W' && amount == 0) {
            break;
        }
        
        if (type == 'W') {
            if (balance - amount >= -200) {
                balance -= amount;
                printf("%d\n", balance);
            } else {
                printf("Not allowed\n");
            }
        } else if (type == 'D') {
            balance += amount;
            printf("%d\n", balance);
        }
    }
    
    return 0;
}