/*hora extra */
#include <stdio.h>
main () { 
/*nh= numero de horas
  vph= valor por hora 
  s=salario        */

int nh, vph , s , s1; 
    printf ("Numero de horas trabalhadas(-1 para finalizar): "); 
    scanf ("%d", &nh); 
        while (nh !=-1){ 
    printf ("Numero de horas trabalhadas(-1 para finalizar): "); 
    scanf ("%d", &nh); 
    printf ("Quanto vale a hora?:"); 
    scanf ("%d", &vph); 

    s = nh * vph;
    s1 = 40* vph + 3*vph/2*(nh-40);
        if (nh <= 40)
        printf ("Salario é : %d\n ",s); 
        else {
        printf("Salario é : %d\n",s1); 
        }
        }
return 0; 
}
