/* (Sistema de Reserva Aérea) Uma pequena companhia aérea acabou de comprar um
computador para o seu novo sistema automático de reservas. O presidente pediu a
você que programasse o novo sistema em C. Você deve escrever um programa para
atribuir assentos a cada vôo do único avião da companhia (capacidade: 10 assentos).
Seu programa deve exibir o seguinte menu de alternativas:
Favor digitar 1 para "fumante"
Favor digitar 2 para "naofumante"
Se a pessoa digitar 1, seu programa deve fazer a reserva de um assento no setor dos
fumantes (assentos 1-5). Se a pessoa digitar 2, seu programa deve reservar um assento
no setor de não-fumantes (assentos 6-10).
Seu programa deve então imprimir um cartão de embarque indicando o número do
assento do passageiro e se ele se encontra no setor de fumantes ou de não-fumantes do
avião.
Use um array unidimensional para representar o esquema dos assentos do avião.
Inicialize todos os elementos do array com 0 para indicar que todos os assentos estão
livres. A medida que cada assento for reservado, iguale os elementos correspondentes
a 1 para indicar que o assento não está mais disponível.
Seu programa nunca deve, obviamente, reservar um assento que já tenha sido
distribuído. Quando o setor de fumantes estiver lotado, seu programa deve perguntar
se a pessoa aceita um lugar no setor de não-fumantes (e vice-versa). Em caso positivo,
faça a reserva apropriada do assento. Em caso negativo, imprima a mensagem
"Próximo voo sai em 3 horas."
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{ 
    int assentos[TAM]= {}; 
    int i; 
    int contadorProprioFUMS=0;
    int contadorProprioNFUMS=5;

    for( i = 0 ; i <TAM; i++ )
    {
        int vCondTempTwo = 0;
        int vCondTemp = 0;

        printf(">>Press<< 1, para fumante\n>>Press<< 2, para nao-fumante:");
        scanf("%d", &vCondTemp);

        
        printf("\n");

        
        if(vCondTemp == 1)
        {
            if(contadorProprioFUMS<5)
            {
            contadorProprioFUMS++;
            assentos[contadorProprioFUMS] = 1; 

            printf("contador:%d\n", contadorProprioFUMS);
            printf("\n");
            }

            else
            {
                printf("Os assentos para fumantes estao cheios!\n");
                printf("Gostaria de um assento para nao fumantes?\n");
                printf(">>Press<< 1, para sim \n>>Press<< 2, para nao:");
                scanf("%d",&vCondTempTwo); 

                    if (vCondTempTwo ==1)
                    {
                        contadorProprioNFUMS++;
                        assentos[contadorProprioNFUMS] = 1; 

                        printf("contador:%d\n", contadorProprioNFUMS);    
                        printf("\n");

                    }

                    else
                    {
                        printf("Pois então espere 3 horas para o proximo voo\n");

                    }
            }
            
        }

        if(vCondTemp == 2)
        {
            contadorProprioNFUMS++;
            if( contadorProprioNFUMS<10)
            {
            assentos[contadorProprioNFUMS] = 1; 

            printf("contador:%d\n", contadorProprioNFUMS);    
            printf("\n");
            }

            if(contadorProprioNFUMS>10)
            {

                printf("Os assentos para nao-fumantes estao cheios!\n");
                printf("Gostaria de um assento para fumantes?\n");
                printf(">>Press<< 1, para sim \n>>Press<< 2, para nao:");
                scanf("%d",&vCondTempTwo); 

                    if (vCondTempTwo ==1)
                    {
                        contadorProprioFUMS++;
                        assentos[contadorProprioFUMS] = 1; 

                        printf("contador:%d\n", contadorProprioFUMS);    
                        printf("\n");

                    }

                    else
                    {
                        printf("Pois entao espere 3 horas para o proximo voo\n");

                    }
            }
        }
      
        

        
    }

     for( i = 1 ; i <TAM; i++ )
    {
        printf("Assento[%d]:%d\n",i,assentos[i]);
    }



 return 0;
}
   


