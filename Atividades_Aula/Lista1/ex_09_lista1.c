#include <stdio.h>
#include <stdlib.h>

void main(){
    float numero, soma = 0, media = 0;

    for(int x = 1; x <= 5; x++){
        printf("Digite um numero qualquer: ");
        scanf("%f", &numero);

        soma += numero;
        media = soma / x;
    }

    printf("O soma dos numeros digitado eh %.2f", soma);
    printf("O Media dos numeros digitado eh %.2f", media);
}