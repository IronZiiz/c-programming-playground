/*Soma de numeros usando o for e definindo quanto o looping
ira se repetir com valor inicial */

#include <stdio.h>
main () { 

    int x,cont, total, y; 
    total=0; 

    printf ("Defina quantos numeros serão somado:\n");
    scanf("%d", &x); 

    for( cont=1; cont<=x ; cont++){ 

        printf("Digite o numero:");
        scanf("%d ", &y ); 
        total+=y; 
    }
    printf ("total: %d ", total );
return 0; 
}