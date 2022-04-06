/*Escreva instruções que atribuam inteiros aleatórios à variável n nos seguintes
intervalos:
d) 1000 <= n <= 1112*/

#include<stdio.h>
#include<stdlib.h>
    main()
    {
        int i;
        
            for ( i = 0; i < 5; i++)
            unsigned semente; 
            printf("Digite a semente:"); 
            scanf("%u", &semente);
            srand(semente);

            {
                printf("%10d", 1000+(rand() %112));
            }
            

    return 0; 
    }
