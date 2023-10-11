#include <stdio.h>

int main(){
  int inputs[50];
  int current = 0;
  char msg[25] = "Ingrese numero:\n";
  do{
    printf(" %s\n ", msg);
    scanf("%d", &inputs[current]);
    //printf("gettedd value %d", inputs[current]);
    printf(" \n ");
    current++;
  }while(inputs[ current - 1 ] >= 0);

  int pares = 0, impares = 0;
  for(int i = 0; i<current-1; i++){
    if(inputs[i] % 2 == 0) pares++;
    else impares++;
  }
  printf("\n pares: %d, impares: %d\n", pares, impares);
  return 0;
}