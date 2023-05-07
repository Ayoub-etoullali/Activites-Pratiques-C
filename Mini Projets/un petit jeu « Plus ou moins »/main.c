#include <stdio.h>
#include <stdlib.h>
int main()
{
int nbr,m;
printf(" \n\n tire au sort un nombre entre 1 et 100 : \n");
scanf("%d",&nbr);
while (0<=nbr<=100)
{
if (nbr < m)
{
printf("\n le nombre mystère est Supérieur à le nombre %d que vous avez entré \n",nbr);
}
else if (nbr > m)
{
printf("\n le nombre mystère est inférieur à le nombre %d que vous avez entré \n",nbr);
}
else {
printf("\n Bravo, le nombre mystère est égale %d \n",nbr);
break;
}
printf(" \n\n tire au sort un nombre entre 1 et 100 : \n");
scanf("%d",&nbr);
}
return 0;
}
