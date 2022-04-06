/*Comparações*/
#include <stdio.h>
    main() {
        int a,b; 
    printf("Digite dois numeros: ");
    scanf("%d%d", &a,&b); 

    if (a == b)
        printf("É igual po\n"); 
        else{
        printf("Não são iguais\n"); }

    if ( a > b ) 
        printf(" %d é maior que %d\n", a, b);
        else {
        printf("%d é menor que %d\n", a, b ); }
    return 0; 
    } 