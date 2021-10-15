#include <stdio.h>

void cubeByReference(int *nPtr);
void cubeByVariavel(int n);
int cubeByReturn(int n);

int main(void){
    int number = 5;

    printf("O valor original do numero eh %d \n", number);

    //cubeByReference(&number);
    //cubeByVariavel(number);
    number = cubeByReturn(number);
    printf("O novo valor do numero eh %d \n", number);
    return 0;
}

void cubeByReference(int *nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}
void cubeByVariavel(int n){
    n = n * n * n;
}
int cubeByReturn(int n){
    n = n * n * n;
    return n;
}