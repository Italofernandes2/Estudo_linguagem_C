#include <stdio.h>

int main(){
    int vetorA[20], vetorB[20], vetorC[20];
    int i, j, troca;

    for(i=0; i<20; i++){
        printf("\nDigite o numero %d do vetorA: ", i);
        scanf("%d", &vetorA[i]);

        printf("\nDigite o numero %d do vetorB: ", i);
        scanf("%d", &vetorB[i]);

        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for(i=0; i<19; i++){
        for(j=i+1; j<20; j++){
            if(vetorC[i] > vetorC[j]){
                troca = vetorC[i];
                vetorC[i] = vetorC[j];
                vetorC[j] = troca;
            }
        }
    }

    printf("\nVETOR C ORDENADO \n");

    for(i=0; i<20; i++){
        printf("%d - ", vetorC[i]);
    }

    return 0;
}
