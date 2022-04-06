/*Uma empresa paga seus empregados como gerentes (que recebem um salário fixo mensal), 
trabalhadores comuns (que recebem um salário fixo por hora para as primeiras 40 horas 
de trabalho e 1,5 vez seu salário por hora normal para as horas extras trabalhadas), 
trabalhadores por comissão (que recebem $250 mais 5,7%de suas vendas brutas) ou trabalhadores 
por empreitada (que recebem uma quantia fixa por item para cada um dos itens produzidos —cada
trabalhador por empreitada dessa empresa trabalha com apenas um tipo dei item). Escreva um programa
que calcule o pagamento semanal de cada empregado. Você não sabe de antemão o número de empregados.
Cada tipo de empregado tem seu código próprio de pagamento: gerentes possuem o código 1,
trabalhadores comuns, o código 2, trabalhadores por comissão, o código 3, e trabalhadores 
por empreitada, o código 4. Use switch para calcular o pagamento de cada empregado com base 
em seu código de pagamento. Dentro do switch peça ao usuário (i.e., o responsável pela folha 
de pagamento) para entrar com os fatos adequados à necessidade de seu programa para calcular 
o pagamento de cada empregado com base em seu código*/

#include <stdio.h>

main ()
{

int codigo, ch,CH, vendea, quantitem1; 
double gerente, produtoco,item1; 
    printf ("Digite seu codigo: ");
    scanf ("%d", &codigo); 

        switch ( codigo)
        { 
            case 1 :
                printf("Olá gerente, digite quanto você ganha por mês: "); 
                scanf("%lf\n", &gerente); 
                printf("Seu salário é fixo, você ganha isso: %f", gerente); 

            break ; 

            case 2 : 
                printf("Olá trabalhador comum! Digite quanto você ganha por hora"); 
                scanf ("%d\n", &ch); 
                printf("Digite quantas horas você trabalhou essa semana:");
                scanf ("%d\n", &CH); 
                    if ( CH <= 40)
                    { 
                        printf ("Este é o seu salario: %d", ch * CH); 
                    } 
                    else
                    { 
                        printf("Este é o seu salario:%F", (40*CH)+((CH-40)*1.5));
                    }

            break ; 

            case 3 : 
                printf("Olá trabalhador por comissão!Digite o preço do seu produto: ");
                scanf("%lf\n ", &produtoco ); 
                printf("Digite quantos vendeu:"); 
                scanf("%d\n", &vendea); 
                printf("Este é o seu salário:%f", 250 + (0.057 * produtoco*vendea));

            break ; 

            case 4 :  
                printf("Digite quanto voce ganha por item:");
                scanf("%lf\n", &item1); 
                printf("Digite quantos voce vendeu:");
                scanf("%d\n", &quantitem1); 
                printf("Este é seu salario:%f", item1 *quantitem1 ); 


            break ;

            default : 
            printf ("!Não existe!");
        }

return 0 ;
}