#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char S[100001 * 8 + 1];
    
    scanf("%d", &N);
    scanf("%s", S);

    int bigdata_count = 0;
    int security_count = 0;
    
    char* ptr = S;

    while (*ptr != '\0') {
        if (strncmp(ptr, "bigdata", 7) == 0) {
            bigdata_count++;
            ptr += 7;
        } else if (strncmp(ptr, "security", 8) == 0) {
            security_count++;
            ptr += 8;
        } else {
            ptr++;
        }
    }

    if (bigdata_count > security_count) {
        printf("bigdata?\n");
    } else if (security_count > bigdata_count) {
        printf("security!\n");
    } else {
        printf("bigdata? security!\n");
    }

    return 0;
}