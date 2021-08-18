#include <stdio.h>
#include <stdlib.h>

void main(){
    float salarioFixo, vendas, salarioTotal, comissao;

    printf("Digite o salario Fixo: ");
    scanf("%f",&salarioFixo);

    printf("Digite as vendas efetuadas: ");
    scanf("%f",&vendas);

    comissao = 1 + 0.03;

    if(vendas > 1500.00){
        vendas = vendas - 1500.00;
        salarioTotal = vendas * (1.05 + comissao);
        salarioTotal += salarioFixo; 
    }else{
        salarioTotal = salarioFixo * comissao;
    }

    printf("O salario Total do vendedor eh: %.2f", salarioTotal);

}