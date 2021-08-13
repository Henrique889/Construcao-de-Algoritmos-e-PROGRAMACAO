#include <stdlib.h>
#include <stdio.h>

void main(){
    /* Tipos de variáveis
        (int,float,double,string,char,bool) 
        
        int --> 0,1,2,3 
        float --> 0,67 - 13,56
        double --> 0,67 - 13,56
        string -> "Carlos", "henriquepalma412@gmail.com"
        char --> "SP", "M"
        bool -> TRUE, FALSE, 0, 1
    */
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("O numero digitado foi %d", num);
}