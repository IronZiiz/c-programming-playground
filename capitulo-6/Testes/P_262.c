/*Tratando arrays de caracteres como stings*/

#include <stdio.h>
    main(){
        char string1[50], string2[] = "string literal";
        int i; 

        printf("Entre com uma string:");
        scanf("%s", string1); /*Ñ precisa do termo de atribuição &*/
        printf("string1 e: %s\nstring2 e: %s\n"
            "string1 com espacos entre caracteres e:\n", string1, string2);

        for(i = 0; string1[i] != '\0'; i++)
            printf("%c ", string1[i]);

        printf("\n"); 

    return 0; 
    }