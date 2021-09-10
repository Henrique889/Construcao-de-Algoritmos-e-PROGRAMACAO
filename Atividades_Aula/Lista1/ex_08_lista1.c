#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero, maior = 0;

    for(int x = 1; x <= 5; x++){
        printf("Digite um numero qualquer: ");
        scanf("%d", &numero);

        if(maior < numero){
            maior = numero;
        }
    }

    printf("O maior numero digitado foi %d", maior);
}