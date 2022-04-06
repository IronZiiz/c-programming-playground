/*Usando inteiros para separação numerica */
#include <stdio.h>
main () {
    int num, n1,n2,n3,n4,n5; 
    printf(" Digite um número de 5 digitos: "); 
    scanf("%d", &num); 
    printf ("C1\tC2\tC3\tC4\tC5\n "); 
    printf ("%d\t%d\t%d\t%d\t%d\n", num/10000, (num%10000)/1000, (num%1000)/100, (num%100)/10, (num%10));
return 0; 
} 

