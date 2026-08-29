//Faça um programa que receba 3 notas e seus respectivos pesos e calcule a media ponderada

#include <stdio.h>

int main(){
    
    float n1, n2, n3, p1, p2, p3, media_ponderada;
    
    printf("Digite as 3 notas: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
    printf("Digite os respectivos pesos: ");
    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);
    
    media_ponderada = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
    
    printf("A media ponderada e: %.2f", media_ponderada);
}