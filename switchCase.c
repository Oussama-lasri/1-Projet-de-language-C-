#include <stdio.h>

main()
{
    int i,j,k;
    printf("entrez deux nombres entiers \n");
    scanf("%d %d",&i,&j);
    printf("entrez 0 pour avoir un quotient entier\n");
    printf("ou 1 pour avoir un quotient fractionnaire\n");
    scanf("%d",&k);

    switch(k)
    {
        case 0 :
            printf("%d\n",i/j);
            break;
        case 1 :
            printf("%f\n",(float)i/j);
            break;
       default :
            printf("il faut entrer 0 ou 1\n");
            printf("relancez l'execution\n");
    }
}
