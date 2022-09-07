#include <stdio.h>
#include <stdlib.h>

int main()
{
    // exercice de echange les variables A et B

    // on declare les variables qu'on utilise
    int A , B , C ;
    // sasir un valeur de A et B par l'utilisateur
    printf(" sasir  A  ");
    scanf("%d",&A);
     printf(" saisir  B  ");
    scanf("%d",&B);
    // traitement
    // on fait un echange avec la variable C
    C = A ;
    A = B ;
    B = C ;
    // affichage
    printf ("la valeur de A est : %d\n",A);
    printf ("la valeur de B est : %d",B);
    return 0;
}
