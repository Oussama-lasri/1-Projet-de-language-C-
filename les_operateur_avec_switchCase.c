#include <stdio.h>
#include <stdlib.h>

int main()
{
    // LES OPERATION
    // choisir un operation
   char op ;
   printf(" \n +\n -\n / \n * \n choisir un opeartion : ");
   scanf("%c",&op);
    // on declarer 2 variable entier
    float A ,B ;
    // l'utilisateur doit saisir les deux variables A et B ;
    printf("saisir A ");
    scanf("%f",&A);
    printf("saisir B ");
    scanf("%f",&B);


   switch(op){
        case '+' : printf(" %.2f + %.2f = %.2f",A,B,A+B);
                   break ;
        case '-' : printf(" %.2f - %.2f = %.2f",A,B,A-B);
                   break ;
        case '/' :  if(B < 0){
                    printf("%.2 est inferieur a 0",B);
                    }
                    else
                    printf ("%f / %f = %.2f",A,B,A/B);
                    break ;

        case '*' : printf(" %.2f * %.2f = %.2f",A,B,A*B);
                    break ;
        default: ("vous n'avez pas choisi un caractere d'operation ");
                break ;
   }
    return 0;
}
