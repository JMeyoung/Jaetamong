#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    const char* heart[9] = {
        " @@@   @@@ ",
        "@   @ @   @",
        "@    @    @",
        "@         @",
        " @       @ ",
        "  @     @  ",
        "   @   @   ",
        "    @ @    ",
        "     @     "
    };

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%s\n", heart[j]);
        }
    }
    return 0;
}