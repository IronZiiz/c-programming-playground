/*Defina uma função hipotenusa que calcule o comprimento da hipotenusa de um
triângulo retângulo, ao serem fornecidos os catetos. Use essa função em um
programa para determinar o comprimento da hipotenusa de cada um dos seguintes
triângulos. A função deve utilizar dois argumentos do tipo double e retornar a
hipotenusa com o tipo double.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

   int main() { 

       double co=0,ca=0;
       double hp;
       int i;
    
            for(i = 1; i<=3 ; i++)
            {
                co= 0; ca =0 ; hp =0; 
                printf("Digite os catetos do triangulo:");
                scanf("%lf%lf\n", &co,&ca );
                hp = sqrt(pow(co,2) + pow(ca,2)); 
                printf("Triangulo:%d\t Lado1:%0.2f\t Lado2:%0.2f\t Hipotenusa:%0.2f\n", i , co,ca, hp);
            }


   return 0;
   }