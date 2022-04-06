/*Os arrays static sao inicializafos com zeros*/
#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void); 

 int main(){
            printf("Pimeira chamada de cada função:\n");
            staticArrayInit();
            automaticArrayInit();

            printf("\n\nSegunada cha,ada de cada função:\n");
            staticArrayInit();
            automaticArrayInit();
return 0;

}

/*Função para demonstrar um array local static*/
void staticArrayInit(void)
{
    static int a[3];
    int i; 

    printf("\nValores de staticArrayInit ao entrar:\n");

    for(i= 0; i <= 2; i++)
        printf("array1[%d]= %d", i, a[i]);

    printf("\nValores de staticArrayInit ao sair:\n");

    for(i=0;  i<=2; i++)
        printf("array1[%d] = %d", i, a[i] +=5);
}

/*função para demonstrar um array local automatic*/
void automaticArrayInit(void)
{
        int a[3] = {1, 2, 3}; 
        int i; 

        printf("\n\nValores de automaticArrayInit ao entrar:\n");

        for(i=0; i<=2; i++)
            printf("array1[%d] = %d", i, a[i]);

        printf("\n\nValores de automaticArrayInit ao sair:\n");

        for (i=0; i<=2; i++)
            printf("array1[%d] = %d",i, a[i]+=5);
}
