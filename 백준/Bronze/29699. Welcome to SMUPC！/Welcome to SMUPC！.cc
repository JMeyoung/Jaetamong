#include <stdio.h>

int main() {
char s[] = "WelcomeToSMUPC";
int N;
scanf("%d", &N);
printf("%c", s[(N - 1) % 14]);
return 0;
}
