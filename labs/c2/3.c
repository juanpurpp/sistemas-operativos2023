#include <stdio.h>

int main(){
  int inputs[50];
  int current = 0;
  char msg[25] = "Ingrese numero:\n";
  do{
    //printf(" %s\n ", msg);
    scanf("%d\n", &inputs[current]);
    //printf(" \n ");
    current++;
  }while(inputs[ current - 1 ] < 0);
  for(int i = 0; i<25; i++){
    printf("\nn%i:%d\n", i, inputs[i]);
  }
  return 0;
}