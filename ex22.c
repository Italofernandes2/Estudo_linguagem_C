#include <stdio.h>

main(){

    int i;
    printf("Digite um numero de 1 a 5:");
    scanf("%d",&i);

    switch (i){

        case 1:
            printf("Voce digitou 1.");
            break;

        case 2:
            printf("Voce digitou 2.");
            break;

        case 3:
            printf("Voce digitou 3.");
            break;

        case 4:
            printf("Voce digitou 4.");
            break;

        case 5:
            printf("Voce digitou 5.");
            break;

        default:
            printf("Numero fora do intervalo desejado.");
            break;
    }
    return(0);
}
