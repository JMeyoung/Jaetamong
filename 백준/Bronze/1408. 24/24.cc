#include <stdio.h>

int toSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main() {
    int h1, m1, s1, h2, m2, s2;
    scanf("%2d:%2d:%2d", &h1, &m1, &s1);
    scanf("%2d:%2d:%2d", &h2, &m2, &s2);

    int now = toSeconds(h1, m1, s1);
    int start = toSeconds(h2, m2, s2);

    int remain = start - now;
    if (remain <= 0) remain += 24 * 3600;

    int hh = remain / 3600;
    int mm = (remain % 3600) / 60;
    int ss = remain % 60;

    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return 0;
}
