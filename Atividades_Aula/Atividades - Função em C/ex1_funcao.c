#include <stdio.h>

void imprime (int num);

void main(){
    imprime(20);
}

void imprime(int num){
    for(int i = 0; i <= num; i++){
        for(int j = 0; j < i; j++){
            printf(" %d", i);
        }
        printf("\n");
    }
}