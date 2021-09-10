#include <stdio.h>
#include <stdlib.h>

void main(){
    float nota, soma, media[4];
    int alunos = 0;

    for(int i = 1; i < 10;i++){
        printf("Aluno %d\n", i);
        for(int j = 1; j < 4; j++){
            printf("Digite a nota %d do aluno: ", j);
            scanf("%f", &nota);
            soma += nota;
        }
        media[i] = soma/2;

        if (media[i] >= 7.0){
            alunos += 1;
        }
    }
    printf("Tem \n%d Alunos com media maior ou igual a 7\n", alunos);
}