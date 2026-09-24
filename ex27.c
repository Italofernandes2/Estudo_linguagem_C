#include <stdio.h>

int main(){
    float salario, novo_salario;

    printf("Diigite o salario: ");
    scanf("%f", &salario);

    if (salario < 1000) {
        novo_salario = salario * 1.30;
        printf("O novo salario e: %.2f", novo_salario);
    }

    else{
        printf("Nao tem direito ao aumento salarial.");
    }

    return(0);
}
