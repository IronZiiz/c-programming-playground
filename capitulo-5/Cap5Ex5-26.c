/*Diz-se que um número inteiro é um número perfeito se a soma de seus fatores,
incluindo 1 (mas não o numero em si), resulta no próprio número. Por exemplo, 6 é
um número perfeito porque 6 = 1+2 + 3. Escreva uma função perfeito que
determine se o parâmetro numero é um número perfeito. Use essa função em um
programa que determine e imprima todos os números perfeitos entre 1 e 1000.
Imprima os fatores de cada número encontrado para confirmar que ele é realmente
perfeito. Desafie o poder de seu computador testando números muito maiores do
que 1000.*/

#include<stdio.h>
#include<stdlib.h>

 int perfeito(int x);
 int main()
 {
     int x; /*será o contador de numeros*/
    
     for (x = 1 ; x<=1000 ; x++ ){
         printf("%d  |  ",x); 
         /*deve ter um teste agora*/
         perfeito(x);
         printf("\n");
             printf("--------------------------------------------------------");
         printf("\n");
        
     }

     return 0;
 }
  int perfeito(int x){ 
      int y; /*divisores*/ 
      int d = 0; /*equação */
      int s = 0; /*soma*/
      int sF =0; /*soma final co desconto do valor incial*/
      int yY = 0; /*separando o y */

      for(y = 1 ; y < 1000; y++ ){
          d = x%y;
          if (d == 0){
              printf("%d ",y);
              s +=y; 
          } 
      }
      sF = s-x;
      if(sF == x){
      printf("\nA soma de seus fatores e %d e e perfeito", sF);}

      else {
      printf("\nA soma de seus fatores e %d e nao e perfeito", sF);
      }
  }
 