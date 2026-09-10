#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite as notas: ");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media < 6) {
        printf("Aluno Reprovado!");
    }

    if (media >= 6) {
        printf("Aluno APROVADO!");
    }

}
