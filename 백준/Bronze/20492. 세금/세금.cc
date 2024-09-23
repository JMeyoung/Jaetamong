#include <stdio.h>
int main() {
  int N, T;
  scanf("%d", &N);

  printf("%d\n", N * 78 / 100);

  T = (N * 80 / 100) + ((N * 20 / 100) * 78 / 100);
  printf("%d\n", T);

  return 0;
}