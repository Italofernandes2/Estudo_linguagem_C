
#include <stdio.h>

int main() {
    int matrizA[3][5];
    int i, j, par = 0, impar = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("\nDigite o elemento %d %d da matriz: ", i, j);
            scanf("%d", &matrizA[i][j]);

            if(matrizA[i][j] % 2 == 0) {
                par++;
            }
            else {
                impar++;
            }
        }
    }

    printf("\nQuantidade de numeros pares: %d", par);
    printf("\nQuantidade de numeros impares: %d", impar);

    return 0;
}
