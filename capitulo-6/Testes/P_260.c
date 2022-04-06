/*Programa para rolar um dado de seis faces 6000*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMANHO 7 /*Escala utilizada 1-6 valores(Depois sera ignorado o caractere da posição 0, por conta da coerencia)*/

    main(){ 
        int face,jogada, frequencia[TAMANHO]={0};

        srand(time(NULL)); 

        for(jogada = 1; jogada<=6000;jogada++){ /*Jogadas a serem feitas*/ 
            face = rand()%6+1; /*Intervalo em que se comportara os numeros aleatorio*/
            ++frequencia[face]; /*Adicionará um ao valor do dado correspondente aos elentos do intervalo */
        }

        printf("%s%18s\n", "Face", "Frequencia"); /*Imprime essas duas strings*/

        for(face = 1; face <=TAMANHO-1; face++)
            printf("%4d%18d\n",face, frequencia[face]);/*Mostrara quantos itens se repetem em cada elemeto do intervalo*/
            
        
    return 0 ;
    }