#include <stdio.h>
#include <string.h> 

void iniciofimString(char text[], int ini, int fim);

int main (){
    char nome[200] = "henrique";
    int ini = 3;
    int fim = 8; 

    iniciofimString("henrique",3,8);

    return 0;

}

void iniciofimString(char text[], int ini, int fim){
    int tam = strlen(text);
    char novoNome[8];
    
    int k = 0;
    for(int i = ini; i < fim; i++){
        novoNome[k++] = text[i];
        //printf("%c \n", nome[i]);
    }
    for(int i = 0; i < k; i++){
        printf("%c", novoNome[i]);
    }
    
}