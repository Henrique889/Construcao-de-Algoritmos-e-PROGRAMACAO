#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa que pergunte quanto você ganha por hora e o número 
de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês. */

void main (){
    float salarioHora, numHorasTrab, salarioTotal;

    printf("Quantos vc ganha por hora? ");
    scanf("%f", &salarioHora);
    printf("Qual o numero de Horas trabalhadas no mes? ");
    scanf("%f", &numHorasTrab);

    salarioTotal = salarioHora * numHorasTrab;

    printf("Seu salario total no mes eh: %4.f", salarioTotal);
}
