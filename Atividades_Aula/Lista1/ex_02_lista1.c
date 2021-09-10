#include <stdio.h>
#include <stdlib.h>

void main() {
    float metros, litros;
    int latas;
    printf("Qual a quantidade de metros quadrados? ");
    scanf("%f", &metros);

    litros = metros/3;

    latas = litros / 18;

    printf("Voce usara %d latas de tinta", latas);
    printf("\nO preco total eh de: R$ %d",latas * 80);

}