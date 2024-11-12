#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();

  char line[101];

  for(int i = 1; i <= N; i++){
    fgets(line, sizeof(line), stdin);
    printf("%d. %s", i, line);
  }
  
    return 0;
}
