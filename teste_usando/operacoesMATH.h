#include <stdio.h>

float somar(float n1, float n2){
    float soma = n1 + n2;
    printf("A soma eh %.2f\n", soma);
    return soma;
}

float subtracao(float n1, float n2){
    return n1 - n2;
}

float multiplicar(float n1, float n2){
    float multi = n1 * n2;
    return multi;
}

float dividir(float n1, float n2){
    return printf("A divisao eh %.2f\n", n1 / n2);
}