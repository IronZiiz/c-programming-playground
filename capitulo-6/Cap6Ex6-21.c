
/*(Gráfico da Tartaruga). A linguagem Logo, que é particularmente popular entre os
usuários de computadores pessoais, tornou famoso o conceito dos gráficos da
tartaruga. Imagine uma tartaruga mecânica que percorra uma sala sob o controle de
um programa em C. A tartaruga possui uma caneta em uma de duas posições, para
cima ou para baixo. Quando a caneta está para baixo, a tartaruga desenha figuras à
medida que se move; quando a caneta está para cima, a tartaruga se move livremente
sem desenhar nada. Neste problema, você simulará a operação da tartaruga e criará
também um esquema computadorizado de movimento.
Use um array plano 50-por-50 inicializado com zeros. Leia comandos de um array
que os contém. Controle sempre a posição atual da tartaruga e se a caneta está para
cima ou para baixo. Admita que a tartaruga sempre começa na posição 0,0 do plano
com sua caneta para cima. O conjunto de comandos da tartaruga que seu programa
deve processar são os seguintes:
-------------------------------------------------------------------------------
Comando Significado
1 Caneta para cima
2 Caneta para baixo
3 Giro para direita
4 Giro para a esquerda
5, 10 Movimento 10 espaços a frente ( ou outro número diferente de 10
6 Imprime o array 50-por-50
9 Fim dos dados (sentinela)
-------------------------------------------------------------------------------

Suponha que a tartaruga esteja em algum lugar próximo do centro do plano. O
"programa" a seguir desenharia e imprimiria um quadrado 12-por-12:
2
5,12
3
5,12
3
5,12
3
5,12
1
6
9
-------------------------------------------------------------------------------

À medida que a tartaruga se move com a caneta para baixo, defina os elementos
apropriados do array plano como 1s. Quando o comando 6 (imprimir) for emitido,
onde houver um 1 no array exiba um asterisco ou outro caractere de sua escolha.
Sempre que houver um zero, exiba um espaço em branco. Escreva programa em C
para implementar os recursos do gráfico da tartaruga descritos aqui. Escreva vários
programas de gráficos da tartaruga para desenhar formas interessantes. Adicione
outros comandos para aumentar a potencialidade de sua linguagem de gráfico de
tartaruga.*/

#include <stdio.h>
#include <stdlib.h>
#define WIDTH 50
#define HEIGHT 50 


int penUp(int a);
int penDown(int b);
int right(int c);
int left(int d);
int forward(int e);
int printFloor(int f);


  int  main ( )
{
    int floor[WIDTH][HEIGHT] = {}; 
    int i = 0;
    int x = 0 , y = 0; 
    int x1 =0 , y1=0;
    int command = 0; 
    int pen;
    int direction;

    /*Initialization the elements with 0 */
    for(x = 0; x < WIDTH ; x++)
    {
        for(y = 0; y < WIDTH ; y++)
        {
            floor[x][y] = 0;
        }
    }   

    /*Explain the comands*/
    printf("COMMANDS\n1 - pen-Up\n2 - pen-Down\n3 - right\n4 - left\n5 - forward\n6 - show graphi\n9 - stop\n");

    /*Prees the comand*/
    for(i = 1; i!=0; i++)
    {
    direction = 0;

    printf(">>TELL ME THE COMMAND<<\n"); 
    printf("command:"); 
    scanf("%d", &command);

    /*Actions*/
    if(command == 1)
    {
        pen= 999; 
        printf("%d\n",pen);
    }
    if(command == 2){
        pen= 888;
        printf("%d\n",pen);
    }

    if(command == 3)
    {
        direction  = 999;
    }
    if(command == 4){
        direction  = 888;
    }
    if(command == 5)
    {
        if(pen == 999 && direction == 999)
        {
        
        };
        if(pen == 999 && direction == 888)
        {

        };
        if(pen == 888 && direction == 888)
        {

        };
        if(pen ==888 && direction == 999)
        {

        };
        if(pen ==999){
            for(x1 = x ; x1 <10 ; x++)
            {
                floor[x+x1][y]= 0;
            }
        };
         if(pen ==888){
            for(x1 = x ; x1 <10 ; x++)
            {
                floor[x+x1][y]= 1;
            }
        };
    }
    if(command == 6){}
    if(command == 9)
    {
        x = 0-1; 
    }


    }
  
  

return 0; 
}
