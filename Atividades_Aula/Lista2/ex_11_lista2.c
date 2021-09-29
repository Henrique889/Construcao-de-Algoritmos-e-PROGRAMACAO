#include <stdio.h>
#include <stdlib.h>

void main(){
    int notas = 0, qtdNotas = 0;
    do{
        qtdNotas++;
        printf("Digite um valor: ");
        scanf("%d", &notas);
        int valores[] = notas;
        for (int i = 0; i < notas;i++){
            printf("Em ORDEM %d", valores[i]);
            int soma = soma + valores[i];
            printf("SOMA: %d", soma);
        }
        for (int i = sizeof(valores)/sizeof(int); i < 0;i--){
            //int valores[i] = notas;
            printf("Em ORDEM INVERSA %d", valores[i]);
        }

    }while(notas == -1);

}