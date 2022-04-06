/*#1-ESTUDO DE EXEMPLOS*/

/*Foi perguntado a quarenta alunos o nível de qualidade da comida na cantina
estudantil, em uma escala de 0 a 10 (1 significa horrorosa e 10 significa excelente).
Coloque as quarenta respostas em um array inteiro e resu-ma os resultados da
pesquisa.
*/

/*Programa de votação estudantil*/
#include <stdio.h>
#define TAMANHO_RESPOSTAS 20 /*Constante que conterá 20 espaços alocados*/
#define TAMANHO_FREQUENCIA 11 /*Constante que colocara em qual escala os dados seram analizados*/

    main(){
        int opiniao, nivel; 
        int respostas[TAMANHO_RESPOSTAS]= {1,2,2,4,4,1,10,1,1,2,3,4,5,3,4,5,3,4,5,2};/*Dados (Notas) dos alunos*/
        int frequencia[TAMANHO_FREQUENCIA] = {0}; /*Define todos os espacos de frequencia para um valor inicial 0*/
                                                  /*Sera usado para contar ocorrencias*/

        for (opiniao = 0; opiniao <= TAMANHO_RESPOSTAS-1; opiniao++)
            ++frequencia[respostas[opiniao]];/*Incrementará ao valor de frequencia conforme o valor de respostas[opiniao]
                                            uma vez que respostas[2] gerará frequencia[2], então sera contado um na variavel que comporta o valor 2'*/

            printf("%s%17s\n", "Nivel","Frequencia");
            for (nivel=1; nivel <= TAMANHO_FREQUENCIA-1; nivel++)/*Terá o "TAMANHO_FREQUENCIA-1", pois será ignorado o primeiro espaço, no caso o 0, para tornar mais dinamico e semantico programa, assim começando logicamente a incrementar no Frequencia[1]*/
                printf("%5d%17d\n", nivel, frequencia[nivel]);

    return 0;
    }