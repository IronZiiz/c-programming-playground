/*Escreva instruções que atribuam inteiros aleatórios à variável n nos seguintes
intervalos:
c) 0 <= n <= 9*/

#include<stdlib.h>
#include<stdio.h>

    main()
    {
        int i; 
        unsigned semente; 

        printf("Digite a semente:"); 
        scanf("%u", &semente);
        srand(semente); 
            for ( i = 0; i < 5; i++)
            {
                printf("%10d", 0 + (rand()%9));
            }
            
    return 0; 
    }