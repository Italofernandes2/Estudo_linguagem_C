#include <stdio.h>

int main()
{
    char opcao;
    float energia, calculo;

    printf("Digite a quantidade de energia: ");
    scanf("%f", &energia);

    printf(
        "Digite:\n"
        "r - residencia\n"
        "i - industria\n"
        "c - comercio\n"
        "Opcao: "
    );
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'r':
            if (energia <= 500) {
                calculo = energia * 0.40f;
            } else {
                calculo = energia * 0.65f;
            }
            break;

        case 'c':
            if (energia <= 1000) {
                calculo = energia * 0.55f;
            } else {
                calculo = energia * 0.60f;
            }
            break;

        case 'i':
            if (energia <= 5000) {
                calculo = energia * 0.55f;
            } else {
                calculo = energia * 0.60f;
            }
            break;

        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("O preco a pagar e: R$ %.2f\n", calculo);

    return 0;
}
