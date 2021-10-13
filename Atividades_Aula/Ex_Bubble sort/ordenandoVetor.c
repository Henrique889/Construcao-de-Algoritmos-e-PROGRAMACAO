#include <stdio.h>

void Ordenar(int v[], int sizeVetor);

void main(){
    int vetor[] = {26,7,237,4,3,40,0,13,8,30};
    int tamanho = sizeof(vetor)/sizeof(int); 

    printf("Vetor antes da Ordenacao!\n");
    for (int i = 0; i < tamanho; i++){
        printf("%d \n", vetor[i]);
    }

    Ordenar(vetor, tamanho);
}

void Ordenar( int v[], int sizeVetor){
    int temp;
    for (int pass = 1; pass < (sizeVetor - 1); pass++){
        for(int i = 0; i < sizeVetor; i++){
            if(v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;             
            }
        }
    }
    printf("Ordenando os valores do vetor...\n");
    for (int i = 0; i < sizeVetor; i++){
        printf("%d \n", v[i]);
    }

}

