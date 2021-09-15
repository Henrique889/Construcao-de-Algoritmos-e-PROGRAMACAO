#include <stdio.h>
#include <stdlib.h>

void main(){
    int vetorA[10], vetorB[10], vetorC[20];

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


    for(int i = 0; i < 20; i++){
        vetorC[i*2] = vetorA[i];
        vetorC[i*2+1] = vetorB[i];
        printf("%d\n", vetorC[i]); 
    }

}