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
printf("\n le nombre myst�re est Sup�rieur � le nombre %d que vous avez entr� \n",nbr);
}
else if (nbr > m)
{
printf("\n le nombre myst�re est inf�rieur � le nombre %d que vous avez entr� \n",nbr);
}
else {
printf("\n Bravo, le nombre myst�re est �gale %d \n",nbr);
break;
}
printf(" \n\n tire au sort un nombre entre 1 et 100 : \n");
scanf("%d",&nbr);
}
return 0;
}
