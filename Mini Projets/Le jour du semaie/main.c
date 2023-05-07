#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour ;
    printf("ecrire le jour de semaine \n");
    scanf("%i",&jour);
    switch(jour)
    {
    case 1 :
        printf("dimanche");
        break;
    case 2 :
        printf("lundi");
        break;
    case 3 :
        printf("mardi");
        break;
    case 4 :
        printf("mercredi");
        break;
    case 5 :
        printf("jeudi");
        break;
    case 6 :
        printf("vendredi");
        break;
    case 7 :
        printf("samedi");
        break;
    default :
        printf("n'existe pas");
    }

    return 0;
}
