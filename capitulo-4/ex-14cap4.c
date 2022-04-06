/*Fatorial sem limites*/
#include <stdio.h> 
main() { 
        int x,i,y; 

    printf ("Insira um numero:");
    scanf  ("%d",&x);
    y=1;
    x++;
    for (i=x; i!=1; i--){
        x--; 
        y*=x;
    }
    printf("Fatorial: %d", y);


return 0 ; 
}

