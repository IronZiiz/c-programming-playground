/*c) Inicializem cada um dos 5 elementos de um array unidimensional inteiro g com o
valor 8.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

main()
{

int g[TAM] = {8,8,8,8,8}; 
int i ;

for(i = 0; i<TAM; i++)
{
    printf("%d, ",g[i]);
}

return 0;
}