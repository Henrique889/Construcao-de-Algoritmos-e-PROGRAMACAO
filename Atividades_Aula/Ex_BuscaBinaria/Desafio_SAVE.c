#include <stdio.h>
#include <string.h>

int BuscaBinaria(int vetor[], int item);
void BuscaSequencial(int vetor[], int item, int contador);

int main(void) {
  int numero[] = {2,4,6,7,9,10,13,24,56,300};
  int contadorS = 0;
  FILE *fp;

  fp = fopen("file.txt","w+");

  for(int i = 0; i < 10; i++){
    int item = numero[i];
    printf("\n  BUSCA Binaria: ");
    printf("\n O item %d esta localizada na posicao %d do vetor.",item,BuscaBinaria(numero,item));
    printf("\n  BUSCA SEQUENCIAL: ");
    BuscaSequencial(numero,item,contadorS);
    printf("\n ");
    fprintf(fp, "Item: %d \n", item);
  }

  fclose(fp);
  
  return 0;
}

void BuscaSequencial(int vetor[],int item, int contador){
  for(int i = 0; i < 10; i++){
    if(vetor[i] == item){
      printf("\n O item %d esta localizada na posicao %d do vetor. Foi %d vezes pulou a posicao do vetor",item,i,contador);
    }
    contador++;
  }
}

int BuscaBinaria(int vetor[],int item){
  int begin = 0, end = 10-1;
  int cont = 1;
  
  while(begin <= end){
    int i = (begin + end) / 2;
    
    if (vetor[i] == item){
      return i;
    }
    if (vetor[i] < item){
      
      begin = i + 1;
    }else{
      end = i;
    }    
    printf("\n %d vezes pulou a posicao do vetor", ++cont); 
      
  }
  return -1;
}