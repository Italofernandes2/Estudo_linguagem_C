#include <stdio.h>

int main() {
    int matrizM[2][2], matrizR[2][2];
    int i, j, maior = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o elemento %dx%d da matriz M: ", i, j);
            scanf("%d", &matrizM[i][j]);

            if (maior < matrizM[i][j]) {
                maior = matrizM[i][j];
            }
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matrizR[i][j] = matrizM[i][j] * maior;
            printf("\nElemento %dx%d da matriz R: %d",i, j, matrizR[i][j]);
        }
    }

    return 0;
}
