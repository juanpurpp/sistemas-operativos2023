#include <stdio.h>

int suma(int n){
  int result = 0;
  for(int i = 0; i<100; i++){
    result+= (2*i)+1;
  }
  return result;
}
void imprimirSuma(){
  printf("%i",  suma(100));
}


int main(void) {
  imprimirSuma();
  return 0;
}