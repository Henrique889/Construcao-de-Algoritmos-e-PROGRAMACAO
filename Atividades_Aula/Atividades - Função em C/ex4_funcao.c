#include <stdio.h>

int verificar(float valor);

void main(){
    float num;

    printf("Digite um valor qualquer:");
    scanf("%f", &num);
    verificar(num);

}

int verificar(float valor){ 
    char result;
    if(valor > 0){
        result = printf("P");
    }else{
        result = printf("N");
    }
    return result;
}