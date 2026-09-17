#include <stdio.h>

main(){
    int vel, valor_multa;

    printf("Digite a velocidade: ");
    scanf("%d", &vel);

    if (vel > 80){
        valor_multa = (vel - 80) * 5;
        printf("Voce foi multado no valor de R$ %2.d.", valor_multa);
    }

    else {
        printf("Voce nao foi multado!");
    }

    return (0);
}
