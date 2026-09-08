//Faca um programa que receba um salario base de um funcionario, calcule e 
//mostre o salario a receber, sabendo-se que o funcionario tem gratificacao de 
//5% sobre o salario base e paga imposto de 7% tambem sobre salario base.

#include <stdio.h>

int main(){
    float salario_base, bonificacao, imposto, novo_salario;
    
    printf("Digite o salrio base: ");
    scanf("%f", &salario_base);
    
    bonificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    
    novo_salario =  salario_base + bonificacao - imposto; 
    
    printf("O novo salario e: %2.f", novo_salario );
    
    return (0);
}