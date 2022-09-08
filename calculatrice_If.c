#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Un programme qui utilise un menu contenant les opérations suivantes:
    somme, soustraction, multiplication, division, le reste d'une division entière et puissance.
    Après avoir choisi l'opération, le programme doit demander
    à l'utilisateur d'entrer les deux termes de l'opération,
     puis le programme affiche le résultat. Le programme doit également demander à l'utilisateur s'il
     souhaite démarrer une autre opération ou quitter le programme.*/
      float N1 ,N2 ;
      int operation;
      char response;
    do {
            printf("-----menu d'operation-----\n");
            printf("1- l'addition \n 2- la soustraction \n 3- la multiplication \n 4- la division \n 5- le reste de division \n 6-la puissance \n");
            printf("donner un operation ");
            scanf("%d",&operation);


            printf("saisir nombre 1 : ");
            scanf("%f",&N1);
            printf("saisir nombre 2 : ");
            scanf("%f",&N2);


            if(operation==1){
                printf("le resultat de l'addition de %.2f et %.2f est : %.2f\n",N1,N2,N1+N2);
            }
            else if(operation==2){
                printf("le resultat de la soustraction de %.2f et %.2f est : %.2f\n",N1,N2,N1-N2);
            }
            else if(operation==3){
                printf("le resultat de la multiplication de %.2f et %.2f est : %.2f\n",N1,N2,N1*N2);
            }
            else if(operation==4){
                    if(N2 < 0)
                        printf("le nombres %d est inferieur a 0\n",N2);
                    else
                        printf("le resultat de la division de %.2f et %.2f est : %.2f\n",N1,N2,N1/N2);
            }

            else if(operation==5){
                printf("le resultat de le reste de division de %.2f et %.2f est : %.2f\n",N1,N2, (int) N1 % (int) N2 );
            }

            else
                printf("le resultat de la puissance de %.2f et %.2f est : %.2f\n",N1,N2,pow(N1,N2));



            printf("si tu peut repeter sasir 'O',sinon 'N' : ");
            scanf(" %C",&response);



    }while(response != 'N' || response != 'n');
    return 0;
}
