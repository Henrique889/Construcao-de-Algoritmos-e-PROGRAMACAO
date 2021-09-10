#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero1, numero2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &numero2);

    if(numero2 < numero1){
        for(int x = numero2; x <= numero1; x++){
            printf("%d ", x);
        }
    }
    if(numero1 < numero2){
        for(int x = numero1; x <= numero2; x++){
            printf("%d ", x);
        }
    }
}