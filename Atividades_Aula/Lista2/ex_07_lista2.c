#include <stdio.h>
#include <stdlib.h>

void main(){
    int j=0, vetorA[10], vetorB[10], vetorC[10], vetor4[30];

    vetorA[0] = 1;
    vetorA[1] = 5;
    vetorA[2] = 0;
    vetorA[3] = 9;
    vetorA[4] = 2;
    vetorA[5] = 3;
    vetorA[6] = 7;
    vetorA[7] = 8;
    vetorA[8] = 6;
    vetorA[9] = 10;

    vetorB[0] = 11;
    vetorB[1] = 15;
    vetorB[2] = 10;
    vetorB[3] = 19;
    vetorB[4] = 12;
    vetorB[5] = 13;
    vetorB[6] = 17;
    vetorB[7] = 18;
    vetorB[8] = 16;
    vetorB[9] = 20;

    vetorC[0] = 21;
    vetorC[1] = 25;
    vetorC[2] = 24;
    vetorC[3] = 29;
    vetorC[4] = 22;
    vetorC[5] = 23;
    vetorC[6] = 27;
    vetorC[7] = 28;
    vetorC[8] = 26;
    vetorC[9] = 30;

    for(int i = 0; i < 10; i++){
        vetor4[j] = vetorA[i];
        j += 3;
    }
    j=1;
    for(int i = 0; i < 10; i++){
        vetor4[j] = vetorB[i];
        j += 3;
    }
    j=2;
    for(int i = 0; i < 10; i++){
        vetor4[j] = vetorC[i];
        j += 3;
    }

    for (int i=0; i< 30; i++) {
        printf("Vetor %d, %d\n", i+1 ,vetor4[i]); 
    }
}
