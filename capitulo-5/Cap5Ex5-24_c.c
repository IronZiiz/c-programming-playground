/*c) Use essas funções para escrever um programa que imprima gráficos mostrando
as temperaturas Fahrenheit equivalentes a temperaturas Celsius de 0 a 100 graus e
as temperaturas Celsius equivalentes a temperaturas Fahrenheit de 32 a 212 graus.
Imprima as saídas organizadas em um formato de tabela que minimize o número
de linhas de saída ao mesmo tempo em que permanece legível.*/

#include <stdio.h>
#include <stdlib.h>
    

 int main(){
     int i;         
     printf("Celsius-Fahrenheit\n");

     for(i = 0; i < 101; i++)
     {
         printf("|%d\t|%0.2lf\t|\n",i,i*1.8+32);
     }

  return 0; 
  }
