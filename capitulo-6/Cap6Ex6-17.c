#include <stdio.h> 
#define TAMANHO 10

void algumaFuncao(int [], int);

int main()
{
int a[TAMANHO] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

printf("Os valores no array sao: \n");

algumaFuncao(a, TAMANHO);

printf("\n"); 
return 0;
}


void algumaFuncao(int b[], int tamanho){
if(tamanho > 0) {
algumaFuncao(&b[1], tamanho - 1); printf("%d ", b[0]);}
}

/*Imprimem os Valores do array */