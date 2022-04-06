/*Calculo do diametro e perimetro com valores 
float de variavel */

#include <stdio.h> 
main () { 

float x ;
    printf ("digite o raio do circulo: "); 
    scanf ("%f", &x); 

    printf("\n"); 

    printf("diametro:%0.2f\n" ,2*x);
    printf("perimetro:%0.2f\n ", 2*3.14159*x);     


return 0; 
}