/*b) A função fahrenheit retorna a temperatura em Fahrenheit equivalente a uma
temperatura em Celsius.*/

#include <stdio.h>
#include <stdlib.h>

 double fahrenheit(double x);

double main(){

    double x = 0; 
    printf("Digite um valor na escala fahrenheit:");
    scanf("%lf", &x);
    fahrenheit(x); 

return 0; 
} 

 double fahrenheit(double x) { 
     printf("Valor convertido para escala celsius: %0.2lf", (x-32)/1.8);
 }


