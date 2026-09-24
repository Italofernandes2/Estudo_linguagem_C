#include <stdio.h>

int main() {
    float valor_casa, salario, meses, prestacao;

    printf("Qual o valor da casa? ");
    scanf("%f", &valor_casa);

    printf("Qual o seu salario? ");
    scanf("%f", &salario);

    printf("Vai pagar em quantos meses? ");
    scanf("%f", &meses);

    prestacao = valor_casa / meses;

    printf("\nValor da prestacao: R$ %.2f\n", prestacao);

    if (prestacao <= 0.30 * salario) {
        printf("Emprestimo aprovado!\n");
    } else {
        printf("Emprestimo negado!\n");
    }

    return 0;
}
