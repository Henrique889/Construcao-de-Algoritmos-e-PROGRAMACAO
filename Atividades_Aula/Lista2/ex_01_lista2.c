#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[3];

    for(int i = 0; i<3; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);  
    }

    for(int i = 3-1; i >= 0;i--){
        printf("%d", vetor[i]);
    }

}