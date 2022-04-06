/*Programa para demonstrar o qualificador do tipo const*/

#include<stdio.h>

void tentaModificarArray(const int[]); 

 int main(){
    int a[] = {10,20 ,30}; 
    tentaModificarArray(a);
    printf("%d%d%d\n", a[0], a[1], a[2]);
    return 0; 
}

void tentaModificarArray(const int b[]){
    b[0] *=2;
    b[1] *=2;
    b[2] *=2;
}