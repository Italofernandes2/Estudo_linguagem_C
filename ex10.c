//Faca um programa que receba o valor de um deposito e o valor da taxa de juros,
//calcule e mostre o valor do rendimento e o valor total do rendimento

#include <stdio.h>

int main(){
    float deposito, taxa, rendimento, total;
    
    printf("Digite o valor do deposito: ");
    scanf ("%f", &deposito);
    printf("\nDigite a taxa de juros: ");
    scanf("%f", &taxa);
    
    rendimento =  deposito * taxa/100;
    total = rendimento + deposito;
    
    printf("\nO valor do rendimento e: %.2f", rendimento);
    printf("\nO valor total e: %2.f", total);
    
    return(0);
}