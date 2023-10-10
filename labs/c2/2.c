#include <stdio.h>
#include <math.h>

int getInt(char msg[]){

  int input;
  printf("\%s\n", msg);
  scanf("%d", &input);
  printf("\n");
  return input;
}

int main(){

  int cateto1 = getInt("Ingrese cateto 1"), cateto2 = getInt("Ingrese cateto 2");
  int hipotenusa = sqrt((cateto1*cateto1) + (cateto2*cateto2));
  int area = (cateto1*cateto2)/2;
  int perimetro = cateto1 + cateto2 + hipotenusa;
  printf("\nvalor hipitenusa: %d\n", hipotenusa);
  printf("\nvalor area: %d\n",area);
  printf("\nvalor perimetro: %d\n", perimetro);
  return 0;
}