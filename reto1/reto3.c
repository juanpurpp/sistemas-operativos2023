#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  // Initialization, should only be called once.
int main(){
    int matriz[3][3];
    srand(time(NULL)); 
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<3;j++){
            matriz[i][j] = rand();
        }
    }
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<3;j++){
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}