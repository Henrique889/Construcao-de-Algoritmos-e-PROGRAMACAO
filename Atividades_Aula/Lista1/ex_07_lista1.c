#include <stdio.h>
#include <stdlib.h>

void main(){
    int valor;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if(valor % 2 == 0){
        printf("O numero %d eh par", valor);
    }else{
        printf("O numero %d eh impar", valor);
    }
}