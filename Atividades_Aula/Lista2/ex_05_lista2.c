#include <stdio.h>
#include <stdlib.h>

void main(){
    int vIdade[2];
    float vAltura[2];

    for(int i = 0; i < 2; i++){
        printf("Digite uma idade: ");
        scanf("%d", &vIdade[i]);
        printf("Digite uma altura: ");
        scanf("%f", &vAltura[i]);
    }

    for(int i = 2-1; i >= 0; i--){
        printf("Idade Digitada: %d\n", vIdade[i]);
        printf("Altura Digitada: %.2f\n", vAltura[i]);
    }

}