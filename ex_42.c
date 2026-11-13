#include <stdio.h>

int main() {
    int matrizA[3][5];
    int i, j, quantidade = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("\nDigite o elemento %dx%d da matriz: ", i, j);
            scanf("%d", &matrizA[i][j]);

            if (matrizA[i][j] > 15 && matrizA[i][j] < 20) {
                quantidade++;
            }
        }
    }

    printf("\nA quantidade de elementos entre 15 e 20 eh: %d", quantidade);

    return 0;
}
