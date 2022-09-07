#include <stdio.h>
#include <stdlib.h>

int main()
{
    // le produit
    // on declarer 2 variable entier
    int A ,B;
    //  on declare un variable P pour initialiser la somme de A et B
    int P ;
    // l'utilisateur doit saisir les deux variables A et B ;
    printf("saisir A ");
    scanf("%d",&A);
    printf("saisir B ");
    scanf("%d",&B);
    // traitement : la somme de A et B
    P = A * B ;
    // on afficher la somme
        printf("%d * %d = %d ",A,B,P);



    return 0;
}
