/*Relação maior e menor  */
/*Estrutura if*/
#include <stdio.h>
    main(){
    int n1 , n2, n3 , n4, n5; 
        printf ("Digite 5 numeros:");
        scanf ("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);

        if ((n1>n2)&&(n1>n3) && (n1>n4)&& (n1>n5))
            printf("%d é o maior de todos\n", n1); 
            if((n1<n2) && (n1<n3) && (n1<n4) && (n1 < n5))
                printf("%d é o menor de todos\n",n1);
        if ((n2>n1) && (n2>n3) && (n2>n4) && (n2>n5))
            printf("%d é o maior de todos\n", n2); 
            if (( n2<n1)&& (n2<n3) && (n2<n4) && (n2<n5))
            printf("%d é o menor de todos\n",n2 ); 
         if ((n3>n1)&&(n3>n2) && (n3>n4)&& (n3>n5))
            printf("%d é o maior de todos\n", n3); 
            if((n3<n1) && (n3<n2) && (n3<n4) && (n3 < n5))
                printf("%d é o menor de todos\n",n3);
         if ((n4>n1)&&(n4>n2) && (n4>n3)&& (n4>n5))
            printf("%d é o maior de todos\n", n4); 
            if((n4<n1) && (n4<n2) && (n4<n3) && (n4 < n5))
                printf("%d é o menor de todos\n",n4);
         if ((n5>n1)&&(n5>n2) && (n5>n3)&& (n5>n4))
            printf("%d é o maior de todos\n", n5); 
            if((n5<n1) && (n5<n2) && (n5<n3) && (n5< n4))
                printf("%d é o menor de todos\n",n4);
            


    return 0; 
    }