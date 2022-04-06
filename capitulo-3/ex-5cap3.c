/*temos uma media total atraves de estrutura while*/
/*termos tambem valor sentinela */

#include <stdio.h>
main () { 

float media, t, t1, km, litro; 
int contador; 

contador = 0; 
t = 0;
t1 = 0;

printf ("Digite o valor de km e litro(-1 para finalizar):\n");

while (km != -1 && litro != -1 ){ 
printf ("Digite o valor de km e litro(-1 para finalizar):");
scanf ("%f%f", &km ,&litro ); 
printf ("l por km : %2f\n", litro/km); 
contador++; 
t+= km; 
t1+= litro ;
}

if ( contador != 0)
printf ("media total : %2f", t1/t); 



return 0; 
}