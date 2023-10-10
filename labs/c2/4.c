#include <stdio.h>

int main(){

  for(int i = 1; i<=10; i++){
    printf("%d -> ", i);
    for(int j = 0; j<=6; j++){
      printf(" %d ", 100+(j*10));
    }
    printf("\n");
  }
  return 0;
}