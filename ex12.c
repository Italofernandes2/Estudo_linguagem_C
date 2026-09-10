#include <stdio.h>
#include <math.h>

main() {
    int num;
    float raiz;
    printf("Digite o um numero inteiro: ");
    scanf("%d", &num);

    if ( num % 2 == 0) {
        raiz = sqrt(num);
        printf("A raiz quadrada e: %3.f", raiz);
    }
    return(0);
}
