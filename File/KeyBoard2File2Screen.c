#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[]){
	FILE *f;
	char fileName[100],x;
	if(argc==2){
		strcpy(fileName,argv[1]);
	}else{	
		printf("entrez le nom du fichier : ");
		scanf("%s",fileName);
	}
	f=fopen(fileName,"w");
	if(!f){ //pb d'ouverture du fichier
		fprintf(stderr,"Erreur d'ouverture en ecriture par fopen du fichier %s, a la ligne : %d\n",__FILE__,__LINE__);
		system("pause");
		return EXIT_FAILURE;
	}
	else{ // ouverture reussie
		while((x=getchar())!=EOF)
			putc(x,f); 
		/* ou bien 
			scanf("%c",&x);
			fscanf(stdin,"%c",&x);
			x=getc(stdin);
		*/
		fclose(f);
		system("cls") ; //pour effacer l'ecran
		f=fopen(fileName,"r");
		while((x=getc(f))!=EOF)
			putchar(x); // ou bien putc(x,stdout)
		fclose(f);
	}
	return 0;
}
