#include <stdio.h>

int main() {
    int matrizA[3][3];
    int i, j, quantidade = 0, media = 0, soma = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("\nDigite o elemento %d %d da matriz: ", i, j);
            scanf("%d", &matrizA[i][j]);

            quantidade++;
            soma += matrizA[i][j];
        }
    }

    media = soma / quantidade;

    printf("\nA media dos elementos e: %d", media);

    return (0);
}
