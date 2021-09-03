#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	float areaM2 = 1, quantLitrosTinta,quantLatas,precoTotal;
	
	do{
		printf("\nDigite metros quadrados da area a ser pintada: ");
		scanf("%f", &areaM2);
	
		if(areaM2 == 0) 
			break;
		
		quantLitrosTinta = areaM2/3;
	
		quantLatas = quantLitrosTinta / 18;
		
		precoTotal = quantLatas * 80;
		
		float partInt = (int)quantLatas;
		float partDecimal = quantLatas - partInt;
		
		if(partDecimal == 0){
		}
		else if(partDecimal >= 0.5){
			quantLatas = partInt + 1;
			precoTotal = quantLatas * 80;
		}else if (partDecimal < 0.5){
			quantLatas = partInt;
			precoTotal = (partInt * 80) + 40;
			printf("Quantidade de Latas de 10L: 1 \n");
		}
		
		printf("Quantidade de Latas de 18L: %.2f \n", quantLatas);
		printf("Preco Total: R$ %.2f", precoTotal);
		
	}while(areaM2 != 0);
	
	printf("\nPrograma Finalizado!!!");
	
	
}
