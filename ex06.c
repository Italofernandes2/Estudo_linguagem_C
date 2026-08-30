//Recebe o salario do funcionario e mostra o novo salario com aumento de 25%

#include <stdio.h>

int main(){
    
    float salario, novo_salario,;
    
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    
    novo_salario = salario * (1.25);
    
    printf("O novo salario e: %.2f", novo_salario);
    
    return(0);
}