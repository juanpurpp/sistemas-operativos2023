#include <stdio.h>
#include <string.h>

int main () {
    char nombres[5][25];
    for(int i = 0; i<5; i++){
        char temp[25];
        scanf("%s", temp);
        strcpy(nombres[i], temp);
    }
    for(int i = 0; i<5; i++) printf("%s\n", nombres[i]);
    return 0;
}