#include<stdio.h>
#include<stdlib.h>

    int j,k,a;
    char C;
void etoile (int L , int N){

    for(j=1;j<=L;j++){

        for(a=1;a<=L-j+N;a++){
            printf(" ");

        }
        for (k=1;k<=(2*j-1);k++){
            printf("*");
        }
      printf("\n");
        }
        }
int main(){

    int k ;

    int l ,n1,n2 ;

    printf("veuillez entrer le nombre des lignes :");
    scanf("%d",&l);
     printf("veuillez entrer le nombre de repitition  :");
    scanf("%d",&n1);
     n2 = n1 ;
    for (k=1 ;k <= n2 ; k++){
        etoile (l++,n1--);



    }





    return 0 ;
    }
