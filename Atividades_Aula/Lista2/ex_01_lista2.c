#include <stdio.h>
#include <stdlib.h>

void main(){


    int vetor[9];

    for(int i = 0; i<9; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);  
    }

    for(int i = 9-1; i >= 0;i--){
        printf("%d\n", vetor[i]);
    }

}