#include <stdio.h>
#include <math.h>

main() {
    int num, quadrado;
    float raiz;
    printf("Digite o um numero inteiro: ");
    scanf("%d", &num);

    if ( num % 2 == 0) {
        raiz = sqrt(num);
        printf("A raiz quadrada e: %3.f", raiz);
    }

    else {
        quadrado = num * num;
        printf("O numero e impar");
        printf("\nO numero ao quadrado e: %d", quadrado);
    }
    return(0);
}
