/*Considere um array inteiro 2-por-5 t.
a) Escreva uma declaração para t.
b) Quantas linhas t possui?
R:Duas.
c) Quantas colunas t possui?
R:Cinco.
d) Quantos elementos t possui?
R:10
e) Escreva os nomes de todos os elementos da segunda linha de t.
f) Escreva os nomes de todos os elementos da terceira coluna de t.
g) Escreva uma única instrução em C que defina como zero o elemento da linha 1 e
coluna 2 de t.
h) Escreva uma série de instruções em C que inicialize como zero cada elemento de t.
Não use uma estrutura de repetição.
i) Escreva uma estrutura for aninhada que inicialize cada elemento de t como zero.
j) Escreva uma instrução em C que entre com os valores dos elementos de t a partir do
terminal.
k) Escreva uma série de instruções em C que determine e imprima o menor valor do
array t.
l) Escreva uma instrução em C que exiba na tela os elementos da primeira linha de t.
m) Escreva uma instrução em C que some os elementos da quarta coluna de t.
n) Escreva uma série de instruções em C que imprima o array t em um formato
organizado de tabela. Liste os subscritos das colunas como cabeçalho ao longo do
topo e liste os subscritos das linhas à esquerda de cada linha.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM1 2
#define TAM2 5 

int defineZero(int x);

int main()
{
    int t[TAM1][TAM2]= {{5,1,3,4,2},{10,9,8,7,6}};
    int i, j; 

    defineZero(t[1][5]);

    /*Item i*/
    
    for(i = 0; i <TAM1 ; i++ )
        {
            for(j = 0 ; j < TAM2 ; j++)
                {
                    t[i][j] = 0;
                    printf("Elemento[%d][%d] = %d\n", i, j , t[i][j]);
                }
        }

    

   
   
    printf("menor: %d", mm);
    

return 0;
}

int defineZero(int x)
{
    x = 0; 
   

    printf("Elemento da linha 1 coluna 2: %d\n",x); 
}

