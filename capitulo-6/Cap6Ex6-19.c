/*Escreva um programa que rode 1000 jogos de Craps e responda a cada uma das
seguintes perguntas:
a) Quantos jogos são vencidos na primeira jogada, segunda jogada,vigésima jogada e
depois da vigésima jogada?
b) Quantos jogos são perdidos na primeira jogada, segunda jogada,vigésima jogada e
depois da vigésima jogada?
c) Quais as probabilidades de vencer no jogo de Craps? (Nota: Você deve descobrir
que Craps é um jogos de cassino mais honestos. O que você acha que isso significa?)
d) Qual a duração média de um jogo de Craps?
e) As probabilidades de vencer aumentam com a duração do jogo?
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3000

int main()
{
    int i=0; 
    int vitorias=0; 
    int derrotas=0;
        
for(i = 0; i<=TAM; i++ )
{
    int dado1=0;
    int dado2=0;
    int soma=0;

        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;

        soma = dado1+dado2; 

        if(soma == 7 || soma ==11)
        {
            vitorias++;
            printf("Ganhou!\n");
        }
     
        else{
            derrotas++;
            printf("Perdeu\n");
        } 
           
}


printf("Jogos ganhos na jogada:%d\n", vitorias);
printf("-----------------------------\n");
printf("Jogos Perdidos na jogada:%d\n",derrotas);

    return 0;
}


        
    





