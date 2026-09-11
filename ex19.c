//Recebe o nome e idade, e informe o nome, idade e valor da mensalidade do plano de saude. (tabela)

#include <stdio.h>
main(){
    int idade;
    char nome  [50];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    if (idade <= 18 ){
        printf("\nNome: %s.", nome);
        printf("\nIdade: %d.", idade);
        printf("\nMensalidade: R$ 50,00.");
    }

     if (idade > 18 && idade <= 29 ){
        printf("\nNome: %s.", nome);
        printf("\nIdade: %d.", idade);
        printf("\nMensalidade: R$ 70,00.");
    }

     if (idade > 29 && idade <= 45 ){
        printf("\nNome: %s.", nome);
        printf("\nIdade: %d.", idade);
        printf("\nMensalidade: R$ 90,00.");
    }

     if (idade > 45 && idade <= 65){
        printf("\nNome: %s.", nome);
        printf("\nIdade: %d.", idade);
        printf("\nMensalidade: R$ 130,00.");
    }

    if (idade > 65){
        printf("\nNome: %s.", nome);
        printf("\nIdade: %d.", idade);
        printf("\nMensalidade: R$ 170,00.");
    }
}
