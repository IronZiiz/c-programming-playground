/*Escreva instruções que atribuam inteiros aleatórios à variável n nos seguintes
intervalos:
e) -1 <= n <= 1*/

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
                printf("%10d", -1 + (rand()%3));
            }
            
    return 0; 
    }