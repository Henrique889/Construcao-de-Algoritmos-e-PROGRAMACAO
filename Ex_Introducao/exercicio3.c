#include <stdio.h>
#include <stdlib.h>

void main(){
    int pesoPeixe;
    printf("Digite o peso do peixe: ");
    scanf("%d",&pesoPeixe);

    if (pesoPeixe > 50){
        printf("O peso do peixe esta acima do permitido voce sofrera um multa de R$ %d",(pesoPeixe - 50)*4);

    }else{
        printf("O peixe esta em peso permitido.");
    }
}

