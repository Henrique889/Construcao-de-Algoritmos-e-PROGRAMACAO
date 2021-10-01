#include <stdio.h>

int somar(float n1, float n2, float n3);

void main(){
    float valor[3];
    for(int i = 0; i < 3; i++){
        printf("Digite um numero: ");
        scanf("%f", &valor[i]);
    }
    somar(valor[0], valor[1], valor[2]);    
}

int somar(float n1, float n2, float n3){
    float soma;
    soma = n1 + n2 + n3; 
    printf("O resultado eh %.2f",soma);
    return soma;
}