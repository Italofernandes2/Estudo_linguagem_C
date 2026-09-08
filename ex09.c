//Faca um programa que receba oi salario base de um funciionario, 
//calcule e mostre seu salario a receber, sabendo-se queo funcionario tem
//gratificacao de 50 reais e paga imposto de 10% sobre o salrio base.

#include <stdio.h>

int main(){
    float salario_base, bonificacao, imposto, novo_salario;
    
    printf("Digite o salario base: ");
    scanf("%f", &salario_base);
    
    bonificacao = salario_base + 50;
    imposto = salario_base * 0.1;
    
    novo_salario = bonificacao - imposto;
    
    printf("O novo salario e: %2.f", novo_salario);
    
    return(0);
}