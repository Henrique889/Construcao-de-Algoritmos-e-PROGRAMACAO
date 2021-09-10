#include <stdio.h>
#include <stdlib.h>

void main(){
    int vetor[19],vetorPar[3],vetorImpar[3];

    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;
    vetor[5] = 6;
    vetor[6] = 7;
    vetor[7] = 8;
    vetor[8] = 14;
    vetor[9] = 33;
    vetor[10] = 55;
    vetor[11] = 67;
    vetor[12] = 40;
    vetor[13] = 0;
    vetor[14] = 61;
    vetor[15] = 25;
    vetor[16] = 39;
    vetor[17] = 42;
    vetor[18] = 10;
    vetor[19] = 11;

    for(int i = 0; i < 19; i++){
        if(vetor[i] % 2 == 0){
            vetorPar[i] = vetor[i];
            printf("\nVetores Pares: %d",vetorPar[i]);
        }else{
            vetorImpar[i] = vetor[i];
            printf("\nVetores Impares: %d",vetorImpar[i]);
        }
        printf("\nTodos os vetores: %d\n",vetor[i]);
    }

}