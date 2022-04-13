/*a) Declare o array como um array inteiro com 3 linhas e 3 colunas. Considere que a
constante simbólica TAMANHO foi definida como 3.
b) Quantos elementos o array contém? 9
c) Use uma estrutura de repetição for para inicializar cada elemento do array com a
soma de seus subscri tos. Presuma que as variáveis inteiras x e y são declaradas
como variáveis de controle.
d) Imprima os valores de cada elemento do array tabela. Presuma que o array foi
inicializado com a de claração,
int tabela[TAMANHO][TAMANHO] = {{1, 8}, {2, 4, 6}, {5}};
e as variáveis inteiras x e y são declaradas como variáveis de controle. Mostre a
saída.*/

#include <stdio.h>
#include <stdlib.h> 
#define TAMANHO 3 

int main () {
    int tabela[TAMANHO][TAMANHO] = {{1,8},{2,4,6}, {5}};
    int x,y, soma=0; 

    for(x = 0; x< TAMANHO; x++)
    {
        for(y = 0; y< TAMANHO; y++)
        {
                 soma+=tabela[x][y];
   
        }
    }
    printf("%d\n", soma); 

    /*Tabela*/
    int i, j;

    for ( i=0; i<TAMANHO; i++ )
    {
        for ( j=0; j<TAMANHO; j++ )
        {
        printf ("\nElemento[%d][%d] = %d\n", i, j,tabela[ i ][ j ]);
        }
    }
    return 0; 
}

