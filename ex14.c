#include <stdio.h>

int main() {
    float num1, num2;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);

    if ( num1 > num2) {
        printf("\nO numero maior e: %.2f", num1);
    }

    if ( num1 < num2) {
        printf("\nO numero maior e: %.2f", num2);
    }

    if ( num1 == num2) {
        printf("\nOs numeros sao iguais.");
    }
    return(0);
}
