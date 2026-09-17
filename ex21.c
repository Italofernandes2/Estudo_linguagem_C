#include <stdio.h>

main(){
    float km, preco;

    printf("Digite a distancia em km: ");
    scanf("%f", &km);

    if (km < 200) {
        preco = km * 0.50;
        printf("O valor da passagem e: R$ %2.f", preco);
    }

    if (km >= 200){
        preco = km * 0.45;
        printf("O preco da passagem e: R$ %2.f", preco);
    }

    return(0);

}
