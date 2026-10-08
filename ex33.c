//Tabuada

#include <stdio.h>

main (){

    int i, num, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\nTabuada do %d\n", num);

    for(i = 0; i<=10; i++){
        resultado = num * i;
        printf("\n%d * %d = %d", num, i, resultado);
    }
    return(0);
}
