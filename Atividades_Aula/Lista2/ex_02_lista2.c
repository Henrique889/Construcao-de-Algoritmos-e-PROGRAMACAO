#include <stdio.h>
#include <stdlib.h>

void main(){
    char vetor[9];
    int consoantes = 0;

    vetor[0] = 'a';
    vetor[1] = 'b';
    vetor[2] = 'c';
    vetor[3] = 'e';
    vetor[4] = 'o';
    vetor[5] = 'i';
    vetor[6] = 'g';
    vetor[7] = 'l';
    vetor[8] = 'j';
    vetor[9] = 'm';
	
    for(int i=0; i < 9; i++){
        if((vetor[i] != 'a') && (vetor[i] != 'e') && (vetor[i] != 'i') && (vetor[i] != 'o') && (vetor[i] != 'u')){
            consoantes += 1;  
            printf("%c\n", vetor[i]);
        }
	}
    printf("A quantidade de consoantes lidas foi: %d\n", consoantes);
    
}