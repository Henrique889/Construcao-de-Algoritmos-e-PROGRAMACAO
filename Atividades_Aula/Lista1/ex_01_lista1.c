#include <stdio.h>
#include <stdlib.h>

void main (){
    float salarioHora, numHorasTrab, salarioBruto, iR, iNSS, sindicato;
    float salarioLiquido;

    printf("Quantos vc ganha por hora? ");
    scanf("%f", &salarioHora);
    printf("Qual o numero de Horas trabalhadas no mes? ");
    scanf("%f", &numHorasTrab);

    salarioBruto = salarioHora * numHorasTrab;
    iR = salarioBruto * 0.11;
    iNSS = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - (iR + iNSS + sindicato);
    
    printf("Seu salario Bruto eh: %.2f", salarioBruto);
    printf("\n O tanto que foi para IR, %.2f", iR);
    printf("\n Valor para o INSS, %.2f", iNSS);
    printf("\n Valor para o sindicato, %.2f", sindicato);
    printf("\n Valor do salario Liquido, %.2f", salarioLiquido);
}