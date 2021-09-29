#include <stdio.h>

#define NUMERO_DE_STRING 4
#define MAX_TAMNAHO_STRING 40

void imprime (int num);

void main(){
    imprime(20);
}

void imprime(int num){
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i; j++){
            printf(" %d", i);
        }
        printf("\n");
    }
}