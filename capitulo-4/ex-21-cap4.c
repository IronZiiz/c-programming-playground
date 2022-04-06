/* Repetição controlada por contador com a estrutura for */

/*4.21 Escreva novamente o programa da Fig. 4.2 de modo que a 
inicialização da variável contador seja feita na declaração 
e não na estrutura for.*/

#include <stdio.h>
main() 
{
    int contador = 1;
    /* inicialização, condição de repetição e incremento */ 
    /* estão incluidos no cabecalho da estrutura */ 
    for  ( ; contador <= 10; contador++) 
    printf("%d\n", contador);
    return 0;}