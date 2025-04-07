#include <stdio.h>

#define MIN_VAL -10000
#define MAX_VAL 10000

int main(void) {
  int A, B;

  scanf("%d %d", &A, &B);

  if (A < MIN_VAL || A > MAX_VAL || B < MIN_VAL || B > MAX_VAL) {
    printf("입력 값이 허용된 범위를 벗어났습니다.\n");
    return 1;
  };
  if (A > B) {
    printf(">");
  } else if (A < B) {
    printf("<");
  } else {
    printf("==");
  }
}