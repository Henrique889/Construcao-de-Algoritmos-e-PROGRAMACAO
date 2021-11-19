#include <stdlib.h>
#include <stdio.h>

void main(){
    
    float distancia[5], media;
    //while(distancia[5] < 5){
        for(int i = 0; i < 5; i++){
            printf("Insira um valor de salto entre 0 e 10: ");
            scanf("%f", &distancia[i]); 
                //if(distancia[i] > 0 && distancia[i] <= 10){
                   //printf("Insira novamente um valor (entre 0 e 10): ");
                //}
            media += distancia[i] / 3;
        }
        for(int i = 0; i < 5; i++){
            int temp;
            
            if(distancia[i] >= temp){
                printf("O maior eh : %f", distancia[i]);)
            }
            if(distancia[i] <= temp){
                printf("O menor eh : %f", distancia[i]);)
            }
        }
        //break;
        printf("%f", media);   
    //}
}



