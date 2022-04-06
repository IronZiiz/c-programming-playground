/*Escreva instruções que atribuam inteiros aleatórios à variável n nos seguintes
intervalos:
a) 1 <= n <= 2
*/

#include <stdio.h>
#include <stdlib.h>


main()
{
    int i; 
    unsigned semente;

    printf("Entre com a semente:");
    scanf("%u", &semente);
    srand(semente);
    for ( i = 1; i < 5; i++)
    {
            printf("%10d", 1 + (rand()%2));
            if (i % 5 == 0)
                printf("\n");
    }
return 0; 
}
   