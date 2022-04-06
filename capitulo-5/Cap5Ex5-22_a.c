/*Escreva segmentos de programas que realizem cada uma das tarefas seguintes:
a) Calcule a parte inteira do quociente quando um inteiro a é dividido por um
inteiro b.*/


#include <stdio.h>
#include <stdlib.h>

  int main(){ 

      int a=0 , b=0; 
      int operacao; 
    printf("Digite o numero a:");
        scanf("%d", &a); 

    printf(""); 

    printf("Digite o numero b:");
        scanf("%d", &b); 
    
    operacao  = a/b; 
    printf("quociente:%d", operacao);

    

      return 0; 
  }