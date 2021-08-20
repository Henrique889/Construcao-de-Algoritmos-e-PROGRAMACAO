#include <stdio.h>
#include <stdlib.h>

void main (){
    int numero;

    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("O numero digitado eh positivo");
    }else if(numero < 0){
        printf("O numero digitado eh negativo");
    }
}