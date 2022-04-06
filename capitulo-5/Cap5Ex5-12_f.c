/*Escreva instruções que atribuam inteiros aleatórios à variável n nos seguintes
intervalos:
f) -3 <= n <= 11*/

#include <stdio.h>
#include <stdlib.h>

    main(){ 
        int i; 
        unsigned semente; 
        printf("Digite a semente:"); 
        scanf("%u", &semente);
        srand(semente);

            for ( i = 0; i < 10; i++)
            {
                printf("%10d", -3+ (rand()%14));
            }
            
    return 0; 
    }