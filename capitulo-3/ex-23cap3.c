/*Quadrado com vazio  no meio*/
#include <stdio.h> 
main () { 
/*3 whiles */
/*x = valor 
  ctdr = contador */
int x , ctdr; 
 

printf (" Digite um numero: ");
scanf ("%d", &x ) ;

ctdr =1;
/*linha superior */ 
while (ctdr <= x){ 
    printf ("*"); 
    ctdr++; 
}
printf("\n"); 
ctdr = 1; 

/*espaço vazio */
while (ctdr <=x*(x-2)){ 
    if (ctdr % x == 1)
    printf ("*"); 
    if (ctdr % x == 0 ) 
    printf ("*\n"); 
    else 
    printf (" "); 
    ctdr++;
}

ctdr = 1; 
/*linha inferior*/
while (ctdr <= x){ 
    printf ("*"); 
    ctdr++; 
} 
printf("\n");

return 0 ;
}