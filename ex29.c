#include <stdio.h>

int main(){
    float salario, novo_salario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario < 1000) {
        novo_salario = salario * 1.35;
        printf("Novo salario e: R$ %.2f", novo_salario);
    }

    if (salario >= 1000 && salario < 1500) {
        novo_salario = salario * 1.30;
        printf("Novo salario e: R$ %.2f", novo_salario);
    }

    if (salario >= 1500 && salario < 2000) {
        novo_salario = salario * 1.20;
        printf("Novo salario e: R$ %.2f", novo_salario);
    }

    if (salario >= 2000 && salario < 4000) {
        novo_salario = salario * 1.10;
        printf("Novo salario e: R$ %.2f", novo_salario);
    }

    if (salario >= 4000){
        printf("Sem aumento, seu salario continua sendo: R$ %.2f", salario);
    }

    return(0);
}
