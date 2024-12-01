#include <stdio.h>

int main() {
    int problems[10] = {11, 9, 9, 9, 8, 8, 8, 8, 8, 8};
    
    char* problem_numbers[10] = {
        "A B C D E F G H J L M",
        "A C E F G H I L M",
        "A C E F G H I L M",
        "A B C E F G H L M",
        "A C E F G H L M",
        "A C E F G H L M",
        "A C E F G H L M",
        "A C E F G H L M",
        "A C E F G H L M",
        "A B C F G H L M"
    };
    
    int N;
    scanf("%d", &N);
    
    printf("%d\n", problems[N - 1]);
    printf("%s\n", problem_numbers[N - 1]);

    return 0;
}
