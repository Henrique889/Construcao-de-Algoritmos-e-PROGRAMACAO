#include <stdio.h>
#include <string.h> 

void iniciofimString(char text[]; int inicio; int fim);

int main (){
    
    char nome[] = "henrique";
    int ini = 3;
    int fim = 8; 

    iniciofimString(nome,ini,fim);

    return 0;

}

void iniciofimString(char text[]; int inicio; int fim){
    int tam = strlen(text);
    char novoNome[tam];
    
    int k = 0;
    for(int i = inicio; i < fim; i++){
        novoNome[k++] = text[i];
        //printf("%c \n", nome[i]);
    }
    //iniciofim(nome,novoNome,ini,fim);
    printf("%s", novoNome);
}