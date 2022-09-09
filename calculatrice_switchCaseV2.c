#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //variable de division
    int D ;
    // les variable de modulu
    int n1 , n2 ;
      float N1 ,N2 ;
      int operation;
      char response;
      int choix ;
      //les variable de equation 2eme degre
              float a , b , c ,X , X1 , X2 , delta ;
     // le variable de Racine Carre
              float RC ;
    // les variables
                float result;


    do {
            printf("-----menu d'operation-----\n");
            printf("1- l'addition \n 2- la soustraction \n 3- la multiplication \n 4- la division \n 5- le reste de division \n 6-la puissance \n 7-valeur absolue \n8-choix des fonctions trigonomitrique\n9-calcule equation 2eme degre\n10-le Racine caree\n");
            printf("donner un operation ");
            scanf("%d",&operation);





            switch(operation){
                case 1 :
                    printf("saisir nombre 1 : ");
                    scanf("%f",&N1);
                    printf("saisir nombre 2 : ");
                    scanf("%f",&N2);
                    printf("le resultat de l'addition de %.2f et %.2f est : %.2f\n",N1,N2,N1+N2);
                        break ;


                case 2 :
                        printf("saisir nombre 1 : ");
                        scanf("%f",&N1);
                        printf("saisir nombre 2 : ");
                        scanf("%f",&N2);

                        printf("le resultat de la soustraction de %.2f et %.2f est : %.2f\n",N1,N2,N1-N2);
                        break ;
                case 3 :
                    printf("saisir nombre 1 : ");
                    scanf("%f",&N1);
                    printf("saisir nombre 2 : ");
                    scanf("%f",&N2);
                    printf("le resultat de la multiplication de %.2f et %.2f est : %.2f\n",N1,N2,N1*N2);
                            break ;

                case 4 :
                    printf("saisir nombre 1 : ");
                    scanf("%f",&N1);
                    printf("saisir nombre 2 : ");
                    scanf("%f",&N2);
                    if(N2 < 0)
                        printf("le nombres %d est inferieur a 0\n",N2);
                    else
                        printf("le resultat de la division de %.2f et %.2f est : %.2f\n",N1,N2,N1/N2);
                    break ;


                case 5 :
                        printf("saisir nombre 1 : ");
                        scanf("%d",&n1);
                        printf("saisir nombre 2 : ");
                        scanf("%d",&n2);
                        D = n1 % n2 ;
                        printf("le resultat de le reste de division entier de %d et %d est : %d\n",n1,n2,D);
                            break ;

                case 6 :
                    printf("saisir nombre 1 : ");
                    scanf("%f",&N1);
                    printf("saisir nombre 2 : ");
                    scanf("%f",&N2);
                    printf("le resultat de la puissance de %.2f et %.2f est : %.2f\n",N1,N2,pow(N1,N2));
                        break ;
                case 7 :
                    printf("saisir nombre 1 : ");
                    scanf("%f",&N1);
                    float A = abs(N1);
                    printf("le resultat de la valeur abs de %.2f est : %.2f\n",N1,A);
                        break ;
                case 8 :

                        do{
                        printf("1- Calcul Cos \n2- Calcul Sin \n3- Calcul Tan \n");
                        printf("votre choix : ");
                        scanf("%d",&choix);
                        }while(choix != 1 && choix != 2 && choix != 3);




                        float X ;
                        printf("saisir un nombre : ");
                        scanf("%f",&X);

                        A : switch(choix){
                            case 1 : printf("cos(%.2f) = %.2f\n",X,cos(X));
                                        break;
                            case 2 : printf("sin(%.2f) = %.2f\n" ,X,sin(X));
                                        break;
                            case 3 : printf("tan(%.2f) = %.2f\n",X,tan(X));
                                        break;
                            goto A ;
                        }
                    case 9 :


                            printf("saisir a : ");
                            scanf("%f",&a);

                            printf("saisir b : ");
                            scanf("%f",&b);

                            printf("saisir c : ");
                            scanf("%f",&c);

                            delta = pow(b,2) - (4*a*c) ;

                            if (delta > 0){
                                X1 = (-b - sqrt(delta))/ (2 * a) ;
                                X2 = (-b + sqrt(delta))/ (2 * a) ;
                                printf("l'equation a 2 solution \n");
                                printf("X1 = %.2f\n",X1);
                                printf("X2 = %.2f\n",X2);

                            }
                            else if (delta == 0){
                                    X = -b /(2*a);
                                printf("l'equation a 1 seul solution : %.2f\n");
                            }
                            else
                                printf("enesemble vide \n");

                            break ;
                    case 10 :
                            printf("Saisir un nombre : ");
                            scanf("%f",&N1);
                            RC = sqrt(N1);
                            printf("le racine carre de %.0f est%.2f\n",N1,RC);
                            break ;
                    case 11 :
                        printf("Enter a number: ");
                        scanf("%f", &N1);
                        if(a<=0){
                        printf("Math Error\n");
                        }
                        else{
                        result = log(a);
                        printf("\nLe Resultat est :  %lf", result);
                        }

            }

            printf("si tu peur choisi un autre operation  'O',sinon 'N' : ");
            scanf(" %C",&response);



    }while(response != 'N' || response != 'n');
    return 0;
}
