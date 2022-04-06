/*Escreva instruções que atribuam inteiros aleatórios à variável n nos seguintes
intervalos:
b) 1 <= n <= 100*/

#include<stdio.h>
#include<stdlib.h>

main(){
    int i; 
    unsigned semente; 

    printf("Digite a semente:"); 
    scanf("%u", &semente); 
    srand(semente);
    for(i = 0; i < 5 ; i++)
    {
        printf("%10d", 1 +(rand()%100));
        
    }

return 0; 
}