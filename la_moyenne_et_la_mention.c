#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int reponse  ;
    do{

    float N[5],S,M;
    int i=0;

    do{
        printf("saisir la note %d : ",i+1);
        scanf ("%f",&N[i]);
    if (N[i]>0 && N[i]<=20){
        i++ ;
    }
    }while(i!=5);


    S = 0 ;
    for(i=0 ; i<=4;i++){
        S = S + N[i];
    }
    M = S / 5 ;
    if (M<10)
        printf(" Opsss , redoublons \n la moyenne : %.2f");
    else if (M>=10 && M<12)
        printf ("felicitation \n la moyenne : %.2f \n mention : Admis \n",M);
    else if (M>=12 && M<14)
        printf ("felicitation \n la moyenne : %.2f \n mention : A bien \n",M);
    else if (M>=14 && M<16)
        printf ("felicitation \n la moyenne : %.2f \n mention : bien \n",M);
    else
        printf ("felicitation \n la moyenne : %.2f \n mention : T bien  \n",M);

    printf("tu peut calcul un autre moyenne si oui saisir '1' ,si non saisir '0' ");
    scanf("%d",&reponse);
    }while (reponse != 0);



    return 0;
}
