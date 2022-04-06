/*Relação de valores and incremento */
#include <stdio.h>
main () {
    int x , y, multi; 
    multi = 2; 
    printf ("Digite um numero: "); 
    scanf  ("%d",&x ); 
    printf ("Digite um numero: "); 
    scanf  ("%d",&y ); 

    multi *= x; 
    y++; 

    if (x == y) 
        printf ("Iguais"); 
    if (x < y)
        printf ("y maior ne pai", y); 
    else 
        printf("x maior ne pai",x ); 



return 0; 

}