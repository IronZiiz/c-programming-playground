/*Determinar existencia de um triangulo com valores 
inteiros*/
#include <stdio.h>
main (){ 
    int  x,y,z;
    printf ("Digite 3 numeros "); 
    scanf("%f%f%f", &x,&y,&z);

    if ((x < y +z ) && (x >y-z) && (x > z-y)){ 
     printf("Ecsiste");
    }   
    else
     printf("Não ecsiste");
return 0; 
}