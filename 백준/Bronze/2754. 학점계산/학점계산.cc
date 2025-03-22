#include <stdio.h>
#include <string.h>

int main() {
    char grade[3];
    scanf("%s", grade);

    double score = 0.0;

    switch (grade[0]) {
        case 'A':
            score = 4.0;
            break;
        case 'B':
            score = 3.0;
            break;
        case 'C':
            score = 2.0;
            break;
        case 'D':
            score = 1.0;
            break;
        case 'F':
            score = 0.0;
            break;
    }

    if (grade[0] != 'F') {
        if (grade[1] == '+') score += 0.3;
        else if (grade[1] == '-') score -= 0.3;
    }

    printf("%.1f\n", score);
    return 0;
}
