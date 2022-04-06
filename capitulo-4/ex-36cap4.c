/*Uma crítica às instruções break e continue é que cada uma delas não é estruturada.
 Realmente as instruções break e continue sempre podem ser substituídas por instruções 
 estruturadas, embora fazer isto possa ser esquisito. Descreva de uma forma geral como 
 qualquer instrução break poderia ser removida de um loop de um programa e substitua essa
  instrução por alguma instrução estruturada equivalente. (Sugestão: A instrução break abandona 
  um loop de dentro de seu corpo. A outra maneira de fazer isto é impondo uma falha no teste de 
  continuação do loop. Pense em utilizar, no teste de continuação do loop, um segundo teste que 
  indique "saída prematura devido a uma condição idêntica ao break".) Use a técnica desenvolvida
   aqui para remover a instrução break do programa da Fig. 4.11.*/

#include <stdio.h>
main( ) {
    int x;
    for  (x = 1;  x <= 10;  x++) { 
           printf  ("%d ", x);

        if  (x == 5){
            x=11; 
        }
    
    }
    printf  ("\n Saída prematura devido a uma condição identica ao break\n");
     return 0;
     }