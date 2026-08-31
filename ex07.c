//Faca um programa que receba o salario de um funcionario e o percentual de 
//aumento, calcule e mostre o valor do aumento e o novo salario

#include <stdio.h>

int main(){
    
    float salario_atual, percentual, salario_novo;
    
    printf("Digite o valor do salario atual: ");
    scanf("%f", &salario_atual);
    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);
    
    salario_novo = salario_atual * (1+percentual/100);
    
    printf("O novo salario do funcionario e: %.2f", salario_novo);
    
    
}