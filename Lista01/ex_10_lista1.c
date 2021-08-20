#include <stdio.h>
#include <stdlib.h>

void main(){
    float nota, contador = 0;

    printf("Digite uma nota(entre 0 e 10): ");
    scanf("%f", &nota);


    while(nota <= 0 || nota >=10){
        printf("\nA nota digitada deve estar entre 0 e 10.");
        printf("\n Tente de Novo!!");
        contador++;
        printf("\nDigite uma nota(entre 0 e 10): ");
        scanf("%f", &nota);
    }

    printf("\nA nota digitada foi: %.2f", nota);


}