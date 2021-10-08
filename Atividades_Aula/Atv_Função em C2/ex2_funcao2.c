#include <stdio.h>

void converterHorario(int hr, int min);

void main (){
    int parar = 0, hora, minutos;
    while(parar != 1){
        printf("Digite a hora: ");
        scanf("%d", &hora);
        printf("Digite os minutos: ");
        scanf("%d", &minutos);
        converterHorario(hora, minutos);
        printf("\nDeseja continuar ? (Sim- 0 Nao = 1): ");
        scanf("%d", &parar);
    }

}

void converterHorario(int hr, int min){
    if (hr > 12 && hr < 24 && min > 00 && min < 60){
        printf(" %d H : %d min PM",hr - 12, min); 
    }else if (hr <= 12 && hr > 0 && min > 00 && min < 60){
        printf(" %d H : %d min AM", hr, min); 
    }else{
        printf("Valor inválido");
    }

}

