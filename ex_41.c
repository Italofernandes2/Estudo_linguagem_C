#include<stdio.h>

int main(){
    int matrizA[3][4], matrizB[3][4], matrizC[3][4];
    int i,j;

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("\nDigite o elemento %dx%d da matrizA: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("\nDigite o elemento %dx%d da matrizB: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("\nO elemento da %dx%d da matriz C eh: %d\n", i,j,matrizC[i][j]);
        }
    }
    return(0);
}
