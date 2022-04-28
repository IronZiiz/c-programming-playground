/*m) Escreva uma instrução em C que some os elementos da quarta coluna de t.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM1 2
#define TAM2 5 


int main()
{
    int t[TAM1][TAM2]= {{5,1,3,4,2},{10,9,8,7,6}};
    int soma = 0  ; 

    soma = t[0][3] + t[1][3];

    printf("Soma dos elementos da quarta coluna: %d",soma );

return 0;

}