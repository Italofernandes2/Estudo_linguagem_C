#include <stdio.h>

main(){
    float num1, num2, resultado;
    int op;

    printf("Digite o primeiro numero.");
    scanf("%f", &num1);
    printf("Digite o segundo numero.");
    scanf("%f", &num2);

    printf("\nEscolhaa operacao: \n1 - Soma \n2- Subtracao \n3 - Multiplicacao \n4- Divisao \n");
    scanf("%d", &op);

    switch(op){
        case 1:
            resultado = num1 + num2;
            printf("O resultado da soma e: %f",resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("O resultado da subtracao e: %f",resultado);
            break;

        case 3:
            resultado = num1 * num2;
            printf("O resultado da multiplicacao e: %f",resultado);
            break;

        case 4:
            resultado = num1 / num2;
            printf("O resultado da divisao e: %f",resultado);
            break;

        default:
            printf("\nOpcao invalida");
            break;

    }
    return(0);

}
