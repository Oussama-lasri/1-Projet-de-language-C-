#include <stdio.h>
#include <stdlib.h>

int main()
{
    // LES OPERATION
    // on declarer 2 variable entier
    float A ,B,operation;
    // l'utilisateur doit saisir les deux variables A et B ;
    printf("saisir A ");
    scanf("%f",&A);
    printf("saisir B ");
    scanf("%f",&B);
   // choisir un operation
   printf ("\n 1-Somme \n 2-produit \n 3-la soustarction \n 4-division \n choisir un numero d'operation : ");
   scanf("%f",&operation);

   if(operation == 1){
    printf("%.2f + %.2f = %.2f",A,B,A+B);
   }
   else if(operation == 2){
    printf("%.2f * %.2f = %.2f",A,B,A*B);
   }
   else if(operation == 3){
    printf("%.2f - %.2f = %.2f",A,B,A-B);
   }
   else if(operation == 4){
        if(B < 0){
            printf("%.2 est inferieur a 0",B);

        }
        else
            printf ("%f / %f = %.2f",A,B,A/B);

   }




    return 0;
}
