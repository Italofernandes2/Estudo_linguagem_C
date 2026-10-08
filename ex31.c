//Exercicio de fatorial

#include <stdio.h>

main (){

    int num, i, fat;

    printf("\nInforme um numero: ");
    scanf("%d", &num);

    fat = 1;

    for(i=1; i<=num; i++){
        fat=fat*i;
        printf("\nO fatorial e: %d", fat);
    }

    return(0);
}
