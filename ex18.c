//Leia um numero e informe se ele é divisivel por 3 e por 7

#include <stdio.h>

int main (){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0) {
        printf("O numero %d e divisivel por 3 e por 7", num);
    }

    if (num % 3 == 0 && num % 7 != 0) {
        printf("O numero %d e divisivel por 3 e nao e divisel por 7", num);
    }

    if (num % 3 != 0 && num % 7 == 0) {
        printf("O numero %d nao e divisivel por 3 e e divisel por 7", num);
    }

    else {
        printf("O numero %f nao e divisel nem por 3 e nem por 7.");
    }
    return(0);
}
