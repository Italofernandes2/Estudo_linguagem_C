#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Nao eleitor");
    }

    if (idade >= 16 && idade < 18) {
        printf("Eleitor facultativo");
    }

    if (idade >= 18 && idade<65) {
        printf("Eleitor obrigatorio");
    }

    if (idade>65) {
        printf("Eleitor facutativo");
    }
    return(0);

}
