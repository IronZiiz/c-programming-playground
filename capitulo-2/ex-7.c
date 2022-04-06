/*Teste sobre numeros flutuantes */
#include <stdio.h>
main() { 
    int raio; 
    float pi; 
    pi=3.14159;

        printf ("Digite o numero do raio:");
        scanf ("%d\n ", &raio); 

        printf ("Area do circulo:%f\n", pi*raio*raio ); 
        printf ("Circunferencia: %f\n ", 2*pi*raio); 
        printf ("Diametro do circulo: %d\n ", 2*raio);





return 0; 
}