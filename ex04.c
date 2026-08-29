//Escreva um programa que leia 4 notas e calcule a media aritmetica das notas 

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, nota4, media;

    printf("Digite as 4 notas: ");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("A media da notas e: ", media);

    return (0)

}