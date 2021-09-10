#include <stdio.h>
#include <stdlib.h>

void main(){


    int vetor[10];

    for(int i = 0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);  
    }

    for(int i = 10-1; i >= 0;i--){
        printf("%d\n", vetor[i]);
    }

}