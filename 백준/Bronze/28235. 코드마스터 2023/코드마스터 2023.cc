#include <stdio.h>
#include <string.h>

int main() {
    char slogan[10];
    scanf("%s", slogan);

    if (strcmp(slogan, "SONGDO") == 0) {
        printf("HIGHSCHOOL\n");
    } else if (strcmp(slogan, "CODE") == 0) {
        printf("MASTER\n");
    } else if (strcmp(slogan, "2023") == 0) {
        printf("0611\n");
    } else if (strcmp(slogan, "ALGORITHM") == 0) {
        printf("CONTEST\n");
    }

    return 0;
}