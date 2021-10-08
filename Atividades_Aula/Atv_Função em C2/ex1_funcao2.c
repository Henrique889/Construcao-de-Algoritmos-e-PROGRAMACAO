#include <stdio.h>

void somaImposto(float taxa, float valor);

void main(){
    float taxaImposto, custo;

    printf("Digite quanto custa o item: ");
    scanf("%f", &custo);
    printf("Agora, informe o imposto sobre o item: ");
    scanf("%f", &taxaImposto);
     
    somaImposto(taxaImposto, custo);

}

void somaImposto(float taxa, float valor){
    printf(" O valor apos a taxa de Imposto eh: %.2f ", valor = valor * (1 + taxa/100));
}