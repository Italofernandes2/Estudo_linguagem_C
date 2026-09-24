#include <stdio.h>

int main(){
    float salario, aumento;

    printf("Diigite o salario: ");
    scanf("%f", &salario);

    if (salario > 1250){
        aumento = salario * 1.1;
    }
    if (salario <= 1250){
        aumento = salario * 1.15;
    }

    printf("O novo salario e: %.2f", aumento);

    return(0);

}
