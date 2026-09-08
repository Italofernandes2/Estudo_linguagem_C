//Faca um programa que receba o custo de um espetaculo teatral e o preco do 
//convite desse espetaculo. Esse programa devera calcular e mostrar a quantidade
//de convites que devem ser  vendidos para que, pelo menos, o custo do espetaculo
//seja alcancado. 

#include <stdio.h>

int main(){
    float custo, preco_entrada, quantidade;
    
    printf("Digite o custo teatral: ");
    scanf("%f", &custo);
    printf("Digite o valor do ingresso: ");
    scanf("%f", &preco_entrada);
    
    quantidade = custo/preco_entrada;
    
    printf("Precisara de %2.f de ingressos vendidos para cobrir o custo.", quantidade);
    
    return(0);
    
}