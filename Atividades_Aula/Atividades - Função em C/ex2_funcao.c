#include <stdio.h>

void imprimir (int num);

void main(){
    imprimir(20);
}

void imprimir(int num){
    for(int i = 0; i <= num; i++){
        for(int j = 0; j < i; j++){
            printf(" %d", j+1);
        }
        printf("\n");
    }
}