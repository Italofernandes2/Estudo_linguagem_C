//Escreva um programa que leia um inteiro e mostre seu antecessor e sucessor

#include <stdio.h>

int main(){
    int num, suc, ant;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    suc = num + 1;
    ant = num - 1;

    printf("\nO sucessor e: %d", suc);
    printf("\nO antecessor e: %d", ant);

    return(0);
}