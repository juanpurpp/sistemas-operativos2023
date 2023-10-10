#include <stdio.h>
#include <string.h>


char getChar(char msg[]){
  char input;
  printf("\n%s\n", msg);
  scanf(" %c", &input);
  printf("\n");
  return input;
}

int main(){
  char frase[50];
  char msg[50] = "Ingrese la frase";
  printf("\n%s\n", msg);
  scanf("%s", &frase);
  printf("\n");
  char letra = getChar("Ingrese la letra para buscar en la frase");
  int coincidencias = 0;
  for(int i = 0; i<strlen(frase); i++){
    if(frase[i] == letra) coincidencias++;
  }
  printf("EL numero de coincidencias fue %d", coincidencias);
  return 0;
}