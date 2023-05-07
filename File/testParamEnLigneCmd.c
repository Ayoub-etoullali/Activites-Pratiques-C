#include<stdio.h>
//programme avec la possibilit� de recevoir des donn�es en ligne de cmd
//par exemple r�cup�rer les donnees d'une personne : nom, prenom, age, ville
int main(int argc,char *argv[]){
	int age;
	char nom[100],prenom[100],ville[100];
	if(argc==5){
		sscanf(argv[1],"%s",nom);
		sscanf(argv[2],"%s",prenom);
		sscanf(argv[3],"%d",&age);
		sscanf(argv[4],"%s",ville);
	}else{
		printf("nom : ");scanf("%s",nom);
		printf("prenom : ");scanf("%s",prenom);
		printf("age : ");scanf("%d",&age);
		printf("ville : ");scanf("%s",ville);
	}
	printf("Nom     : %s\nprenom : %s\nage      : %d\nVille   : %s\n"
																	,nom,prenom
																	,age,ville
			);	
	return 0;
}
