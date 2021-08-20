#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O numero %d eh o maior", num1);
    }else if (num2 > num1)
    {
        printf("O numero %d eh o maior", num2);
    }
}

