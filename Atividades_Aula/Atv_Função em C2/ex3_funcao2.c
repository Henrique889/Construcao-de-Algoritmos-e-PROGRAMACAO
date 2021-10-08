#include <stdio.h>

float valorPagamento(float pago, int dias);

void main(){
    float valor = 1; 
    int dias;

    while (valor != 0){
        printf("Informe o valor da prestacao: ");
        scanf("%f",&valor);

        if (valor == 0) {
            break;
        }

        printf("Informe os dias em atraso: ");
        scanf("%d", &dias);

        float resulta = valorPagamento(valor, dias);

        printf(" O valor a ser pago eh %.2f \n", resulta);
    }
    
}

float valorPagamento(float pago, int dias){
    if (dias == 0){
        return pago;
    }else{
        float valor = pago * 1.03;
        float d = valor + 0.001 * dias;
        return d;
    }
    
}
    