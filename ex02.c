// Faca um programa que calcule e mostre a area de um triangulo

#include <stdio.h> 

int main() {
    float base, altura, area;

    printf("\nDigite o valor da base: ");
    scanf("%f", &base);
    printf("\nDigite o valor da altura: ");
    scanf("%f", &altura);

    area = (base*altura)/2;

    printf("\nA area do triangulo e: %.2f", area);

    return(0);

}