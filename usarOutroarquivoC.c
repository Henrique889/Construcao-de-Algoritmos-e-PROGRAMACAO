#include <stdio.h>

//implementar outro arquivo pra esse, e ficar utilizável...
#include "teste_usando/programaTest.h"
#include "teste_usando/operacoesMATH.h"

void exibirMens(){
    printf("Boa noite!!");
}

int main(void){
    //retr();  //chamando função de outro arquivo...
    //exibirMens(); 
    somar(5, 7); 
    somar(7, 7);

    float sub = subtracao(10, 7);
    printf("A subtracao eh %.2f\n", sub);

    float multi = 0;
    multi = multiplicar(2, 3);
    printf("A multiplicao eh %.2f\n", multi);

    dividir(15, 3);

}
