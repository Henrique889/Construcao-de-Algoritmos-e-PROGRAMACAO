#include <stdio.h>
#include <stdlib.h>

int main(){
    int temp[12];
    char mes[12];
    float media = 0;

    char meses[12] = {("Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro")};

    mes[1] = ("Janeiro");
    mes[2] = ("Fevereiro");
    mes[3] = ("Março");
    mes[4] = ("Abril");
    mes[5] = "Maio";
    mes[6] = "Junho";
    mes[7] = "Julho";
    mes[8] = "Agosto";
    mes[9] = "Setembro";
    mes[10] = "Outubro";
    mes[11] = "Novembro";
    mes[12] = "Dezembro";

    for(int i = 0; i < 12; i++){
        printf("Informe a temperatura: ");
        scanf("%d", &temp[i]);
        media += temp[i];            
    }
    media = media/12;
    printf("Media das temperaturas : Anual -> %.2f \n", media);

    for(int i = 0; i < 12; i++){
        if(temp[i] > media){    
            printf("O Meses que estao acima da temperatura Anual : %s \n", mes[i]);
        }
        //printf("O Mes que esta acima da temperatura Anual eh: %s", mes[i]);
    }


}