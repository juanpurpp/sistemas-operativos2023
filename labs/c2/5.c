#include <stdio.h>
#include <string.h>

const char* isPalindromo(char string[]){
  int length = strlen(string);
  for(int i = 0; i<length; i++){
    if(string[i] != string[length-1-i]) return "No es palindromo";
  }
  return "Si es palindromo";
}
int main(){

  char string[50];
  printf("Ingrese el string para confirmar si es palindromo  xd\n");
  scanf("%s", &string);
  printf("Resultado: %s", isPalindromo(string));
  return 0;

}