/*Escreva um programa em C que simule a jogada de dois dados. O programa deve usar
rand para rolar o primeiro dado e deve usar rand novamente para rolar o segundo
dado. A soma dos dois valores deve então ser calculada. Nota: Como cada dado pode
mostrar um valor inteiro de 1 a 6, a soma dos dois valores \
de 2 a 12 com 7 sendo a soma mais freqüente e 2 e 12 sendo as somas menos
freqüentes. A Fig. 6.23 mostra as 36 combinações possíveis dos dois dados. Seu
programa deve rolar os dados 36.000 vezes. Use um array unidimensional para
registrar o número de vezes que cada soma possível é obtida. Imprima os resultados
em um formato de tabela. Além disso, determine se as somas são razoáveis, i.e., há
seis maneiras de obter 7, portanto, aproximadamente um sexto do total de jogadas
deve ser 7.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dado1=0;
    int dado2=0;
    int soma=0;
    int i ;
    int contandoSetes =0;
    
    for(i = 0 ; i<3600; i++){
        soma= 0;
        dado1=0;
        dado2=0;

        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;

        soma = dado1 + dado2;
        
        if(soma == 7){
            contandoSetes++;
            printf("%d\n",contandoSetes);
        }

    }
       
        
        return 0;
}
