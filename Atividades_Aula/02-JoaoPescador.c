#include <stdlib.h>
#include <stdio.h>

void main(){

    float pesoTotal, excessoPeso, totalPagar;
    
    //entrada de dados
    printf("Digite o peso dos peixes: ");
    scanf("%f", &pesoTotal);

    //processamento
    if(pesoTotal > 50){
        excessoPeso = pesoTotal - 50;
        totalPagar = excessoPeso * 4;
        printf("Excesso de peso: %2.f \n", excessoPeso);
        printf("Total a Pagar: %2.f \n", totalPagar);
    }else{
        printf("Voce nao precisa pagar multa. ");
    }
    
    //saída de dados
    //printf("O peso digitado foi %.2f", pesoTotal);

}