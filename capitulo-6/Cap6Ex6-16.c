#include <stdio.h> 
#define TAMANHO 10

int quelssoFaz(int [], int);

main()
{

int total, a[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

total = quelssoFaz(a,TAMANHO);

printf("Soma dos valores dos elementos do array e %d\n", total);
return 0;
}

int quelssoFaz(int b[], int tamanho)
{
if (tamanho == 1)
return b[0]; else
return b[tamanho - 1] + quelssoFaz(b, tamanho - 1);
}

/*Soma valores dentro do array*/