#include <string.h> 
#include <stdio.h>
const char* stringReverse(char str[]){

 int length = strlen(str);
     char result[length];
  for(int i = 0; i<length; i++){
    result[i] = str[length-1-i];
  }
  printf("%s", result);
  return result;
}
int main(void) {
  char input[20];
  scanf("%s", &input);
  return 0;
}