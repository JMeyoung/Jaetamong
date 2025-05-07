#include <stdio.h>
int main() {
  int V, i;
  char vote[16];

  scanf("%d", &V);
  scanf("%s", vote);

  int countA = 0, countB =0;
  for (int i = 0; i < V; i++) {
    if (vote[i] == 'A') countA++;
    else if (vote[i] == 'B') countB++;
  }

  if (countA > countB)
    printf("A");
  else if (countA < countB)
    printf("B");
  else 
    printf("Tie");
  

  
  return 0;
}