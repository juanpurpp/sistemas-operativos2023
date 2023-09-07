#include <string.h> 
#include <stdio.h>
const char* stringReverse(char str[]){
    char result[strlen(str)];
  for(int i = 0; i<strlen(str); i++){
    result[i] = str[strlen(str)-i];
  }
  return result;
}
int main(void) {
  char input[20];
  scanf("%s", &input);
  printf("%s",stringReverse(input) );
  return 0;
}