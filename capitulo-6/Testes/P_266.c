/*O nome de um array é o mesmo que &array[0]*/
#include<stdio.h>

int main(){

    char array[5];
    printf(" array = %p\n&array[0] %p\n", array, &array[0]);

    return 0;
}