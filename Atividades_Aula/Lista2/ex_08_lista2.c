#include <stdio.h>
#include <stdlib.h>

void main(){
    int alunos=0, total = 30, idades[30];
    float alturas[30], media;

    idades[0] = 15;
    idades[1] = 15;
    idades[2] = 13;
    idades[3] = 10;
    idades[4] = 20;
    idades[5] = 29;
    idades[6] = 60;
    idades[7] = 5;
    idades[8] = 1;
    idades[9] = 5;
    idades[10] = 8;
    idades[11] = 26;
    idades[12] = 18;
    idades[13] = 11;
    idades[14] = 15;
    idades[15] = 20;
    idades[16] = 19;
    idades[17] = 14;
    idades[18] = 33;
    idades[19] = 36;
    idades[20] = 15;
    idades[21] = 50;
    idades[22] = 40;
    idades[23] = 10;
    idades[24] = 3;
    idades[25] = 15;
    idades[26] = 50;
    idades[27] = 19;
    idades[28] = 10;
    idades[29] = 31;
    idades[30] = 5;

    alturas[0] = 1.5;
    alturas[1] = 1.8;
    alturas[2] = 1.4;
    alturas[3] = 1.6;
    alturas[4] = 1.75;
    alturas[5] = 1.5;
    alturas[6] = 1.8;
    alturas[7] = 1.4;
    alturas[8] = 1.6;
    alturas[9] = 1.75;
    alturas[10] = 1.5;
    alturas[11] = 1.8;
    alturas[12] = 1.9;
    alturas[13] = 1.6;
    alturas[14] = 1.95;
    alturas[15] = 1.5;
    alturas[16] = 1.50;
    alturas[17] = 1.2;
    alturas[18] = 1.6;
    alturas[19] = 1.75;
    alturas[20] = 1.50;
    alturas[21] = 1.2;
    alturas[22] = 1.6;
    alturas[23] = 1.75;
    alturas[24] = 1.50;
    alturas[25] = 1.2;
    alturas[26] = 1.6;
    alturas[27] = 1.75;
    alturas[28] = 1.8;
    alturas[29] = 1.9;
    alturas[30] = 1.7;

    for(int i = 0; i < 30; i++){
        media += alturas[i] / total;
        //printf("%.2f\n\n", media);
    }
    for(int i = 0; i < 30; i++){
        if(idades > 13 && alturas[i] < media){
            alunos++;
        }
    }
    printf(" Possui %d Alunos tem a altura inferior a media de altura\n", alunos);
    
}