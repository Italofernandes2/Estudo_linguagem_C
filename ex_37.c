#include <stdio.h>

int main(){
    int vetorA[10];
    int vetorPARES[10], vetorIMPARES[10];
    int i, j=0, k=0;

    for(i=0; i<10; i++){
        printf("Digite o %d o elemento", i+1);
        scanf("%d", &vetorA[i]);
    }
    for(i=0; i<10; i++){
        if(vetorA[i]%2==0){
            vetorPARES[j] = vetorA[i];
            j++;
        }
        else{
            vetorIMPARES[k]=vetorA[i];
            k++;
        }
    }
    printf("\n VETOR A \n");
    for (i=0; i<10; i++){
        printf("%d - ", vetorA[i] );
    }
    printf("\n VETOR PARES \n");
    for (i=0; i<j; i++){
        printf("%d - ", vetorPARES[i] );
    }
    printf("\n VETOR IMPARES \n");
    for (i=0; i<k; i++){
        printf("%d - ", vetorIMPARES[i] );
    }

    return(0);
}
