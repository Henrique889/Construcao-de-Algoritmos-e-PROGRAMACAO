#include <stdio.h>

void main(){
    char *asking[] = {"Telefonou para a vitima?","Esteve no local do crime?","Mora perto da vitima?", "Devia para a vitima?", "Ja trabalhou com a vitima?"};
    char respostas[5];
    char *status[] = {"Inocente","Suspeito(a)", "Cúmplice", "Cúmplice", "Assassino"};
    int total = 0;

    int aski = sizeof(asking) / sizeof(char);

    for(int i = 0; i < 5;i++){
        printf(asking[i], " (sim ou não).");
        scanf("%s", respostas);
        if(respostas == "sim"){
            total += 1;
        }
    }
    if (total < 2){
        printf(status[0]);
    }else if (total == 2){
        printf(status[1]);
    }
    else if (total <= 3 && total <= 4){
        printf(status[2]);
        
    }
    else if (total == 5){
        printf(status[4]);
    }


}