#include <stdio.h>
#include <string.h>

typedef struct {
    char s[1105];
} BigBin;

void add_bin(const char *a, const char *b, char *res) {
    int la = strlen(a), lb = strlen(b);
    int lmax = la > lb ? la : lb;
    int carry = 0, idx = 0;
    for (int i = 0; i < lmax; i++) {
        int da = (i < la) ? a[la - 1 - i] - '0' : 0;
        int db = (i < lb) ? b[lb - 1 - i] - '0' : 0;
        int sum = da + db + carry;
        res[idx++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    if (carry) res[idx++] = '1';
    res[idx] = 0;
    for (int i = 0; i < idx / 2; i++) {
        char tmp = res[i];
        res[i] = res[idx - 1 - i];
        res[idx - 1 - i] = tmp;
    }
}

int main() {
    char N[1100];
    scanf("%s", N);
    int len = strlen(N);
    char shifted[1105];
    strcpy(shifted, N);
    for (int i = 0; i < 4; i++) shifted[len + i] = '0';
    shifted[len + 4] = 0;
    char result[1106];
    add_bin(shifted, N, result);
    printf("%s\n", result);
    return 0;
}
