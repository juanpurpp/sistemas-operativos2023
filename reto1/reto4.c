#include <stdio.h>

int main(){

    int matrz[2][2];
    int matrz2[2][2];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("Ingrese fila %d col %d\n", i,j);
            scanf("%d",&matrz[i][j]);
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("Ingrese fila %d col %d\n", i,j);
            scanf("%d",&matrz2[i][j]);
        }
    }
    printf("\nsuma:\n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("[%d]", matrz[i][j] + matrz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}