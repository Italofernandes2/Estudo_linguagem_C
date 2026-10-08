#include <stdio.h>

/* O uso do for:
    for (i=valor inicial; condicao; incremento ou decremento de i){
        <instrucao>
    }*/

main (){

    char nome[30];
    int i;

    printf("\n Informe o nome: ");
    scanf("%s", nome);

    for (i=1; i<=10; i++){
        printf("\n %s", nome);
    }

    return(0);
}
