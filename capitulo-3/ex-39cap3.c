#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main () {
    int num,numt; 
    int expo; /*magnitude que define exponte */
    int i; /*indice  que sera o expoente*/
    int q; /*quantidade*/

        printf("Digite um numero");
        scanf ("%d",&num);

        expo = (int)log10(num);
        numt = num ; 

      for ( i = expo; i >=0; i--) {
          int digito = numt /pow(10,i);
          numt -=digito * pow(10,i); 

          if (digito == 7){
              q++;
          }
      }
      printf("o numero %d, tem %d numeros iguais a 7\n", num,q);
return 0; 
}
