#include <stdio.h>
#include <stdlib.h>

void main(){
    float media, nota1, nota2;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7){
        printf("Aluno Aprovado");
    }else{
        printf("Aluno Reprovado");
    }
}