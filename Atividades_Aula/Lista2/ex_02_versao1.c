#include <stdio.h>
#include <stdlib.h>

void main(){
    char vetor[10];
    char vogais[] = {'a','e','i','o','u','A','E','I','O','U'};

    printf("Digite ate 10 caracteres: ");
    scanf("%s", vetor);

    // tamanho do vetor / tipo do vetor;
    int lengthVetorC = sizeof(vetor) / sizeof(char);
    int lengthVetorVogais = sizeof(vogais) / sizeof(char);

    //printf("lengthVetorC = %d \n", lengthVetorC);
    //printf("lengthVetorVogais = %d \n", lengthVetorVogais);

    printf("O texto digitado foi: %s \n", vetor);
    printf("Consoantes do Texto Digitado... \n");

    for(int i=0; i < lengthVetorC; i++){
        int count = 0;
        for(int j = 0; j < lengthVetorVogais; j++){
            if(vetor[i] == vogais[j]){
                count++;
            }
        }
        if (count == 0) printf("%c \n", vetor[i]);
	}
    //printf("A quantidade de consoantes lidas foi: %d\n", consoantes);
}

    
    
