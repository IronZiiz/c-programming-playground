/*Uma garagem de estacionamento cobra $2,00 de taxa mínima para estacionar até
três horas. A garagem cobra um adicional de $0,50 por hora ou fração caso sejam
excedidas as três horas. A taxa máxima para qualquer período determinado de 24
horas é $10,00. Admita que nenhum carro fique estacionado por mais de 24 horas.
Escreva um programa que calcule e imprima as taxas de estacionamento para três
clientes que estacionaram ontem seus carros nessa garagem. Você deve fornecer as
horas que cada cliente ficou estacionado. Seu programa deve imprimir os
resultados organizados em um formato de tabela e deve calcular e imprimir o total
recebido no dia de ontem. O programa deve usar a função calcula-Taxas para
determinar o valor a ser cobrado de cada cliente. A saída de seu programa deve ter
o seguinte formato:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

   int calcula_taxa(float y); 
  
int main () { 

     

    float x = 0 , i; 

        for (i = 1 ; i<= 3; i++ )
        { 
            x =
            printf("Digite o numero de horas: ");
            scanf("%f", &x);
            calcula_taxa(x);
               

            
        }

    return 0; 
}
  
   int calcula_taxa(float y)
    {

        if (y <=3)
        { 
            printf("Total a pagar R$2,00\n"); 
        }
        if (y > 3 && y <= 24)
        { 
            printf("Total a pagar R$%f\n", (y-2)*1/2 + 2 ); 

        }
        if ( y > 24 )
        { 
            printf("O carro nao pode ficar mais de 24 horas\n  ");
        }
        
        return 0; 
    }


        