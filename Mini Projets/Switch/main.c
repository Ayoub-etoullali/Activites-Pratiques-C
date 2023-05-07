#include <stdio.h>
#include <stdlib.h>
int main()
{
int choix;
printf("=== Menu === \n 1. Royal Cheese \n 2. Mc Deluxe \n 3. Mc Bacon \n 4. Big Mac \n Votre choix ? \n");
scanf("%d", &choix);
switch (choix)
{
case 1 :
printf("Royal Cheese \n");
break;
case 2 :
printf(" Mc Deluxe \n");
break;
case 3 :
printf(" Mc Bacon \n");
break;
case 4 :
printf("Big Mac \n");
break;
default:
printf("votre choix est : ");
break;
}
return 0;
}
