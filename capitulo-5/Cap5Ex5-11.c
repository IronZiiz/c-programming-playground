
    /*A função floor pode ser usada para arredondar um número até uma determinada
    casa decimal. A instrução
    y = floor(x * 10 + .5) / 10;
    arredonda x para décimos (a primeira posição à direita do ponto decimal, ou
    vírgula). A instrução
    y = floor(x * 100 + .5) / 100;
    arredonda x para centésimos (i.e., a segunda posição à direita do ponto decimal, ou
    vírgula). Escreva um programa que defina quatro funções para arredondar um
    número x de várias maneiras
    a) arredondaParaInteiro(numero)
    b) arredondaParaDecimos(numero)
    c) arredondaParaCentesimos(numero)
    d) arredondaParaMilesimos(numero)
    Para cada valor lido, seu programa deve imprimir o valor original, o número
    arredondado para o inteiro mais próximo, o número arredondado para o décimo
    mais próximo, o número arredondado para o centésimo mais próximo e o número
    arredondado para o milésimo mais próximo.
    */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*PROTOTYPE_FUNCTIONS AREA*/
    int arredondaParaInteiro(double x); 
    double arredondaParaDecimos(double x); 
    double arredondaParaCentesimos(double x); 
    double arredondaParaMilesimos(double x); 

    main()
    { 
            double num1=0, num2=0, num3=0, num4=0; 
            int i; 

            printf("Digite um numero:"); 
            scanf ("%lf", &num1 );
                arredondaParaInteiro(num1); 

            printf("Digite um numero:"); 
            scanf ("%lf", &num2); 
                arredondaParaDecimos(num2); 

            printf("Digite um numero:"); 
            scanf ("%lf", &num3); 
                arredondaParaCentesimos(num3); 

            printf("Digite um numero:"); 
            scanf ("%lf", &num4); 
                arredondaParaMilesimos(num4);

    return 0; 
    }

/*FUNCTIONS AREA*/
    arredondaParaInteiro(double x) 
    { 
            printf("Original:%0.2f\tArrendondado: %0.2f\n ", x,floor(x+.5)); 
    }

    double arredondaParaDecimos(double x)
    {
        printf("Original:%0.2f\tArrendondado: %0.2f\n ", x,floor(10*x+.5)/10);

    }

    double arredondaParaCentesimos(double x)
    { 
        printf("Original:%0.3f\tArrendondado: %0.3f\n ", x,floor(100*x+.5)/100);

    } 
        
    double arredondaParaMilesimos(double x)
    {
        printf("Original:%0.4f\tArrendondado: %0.4f\n ", x,floor(1000*x+.5)/1000);

    }

