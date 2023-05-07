#include"GestionAbsence.h"
#include<stdio.h>
#include<stdlib.h>

classe_t creerListe(int taille){
	classe_t x;
	x.nbS=0;
	x.nbE=0;
	x.taille=taille;
	x.lstE=(etudiant_t*)malloc(taille*sizeof(etudiant_t));
	return x;
}

etudiant_t lireEtudiant(){
	etudiant_t x;
	printf("Mtr : ");scanf("%d",&x.mtr);
	fflush(stdin);// pour vider la mem temporaire associ�e au clavier
	printf("Nom : ");gets(x.nom);
	return x;
}
//affichage en ligne
void afficherEtudiant(etudiant_t x,int nbS){
	int cumul=0,i;
	printf("%5d%20s",x.mtr,x.nom);	
	for(i=0;i<nbS;i++){
		cumul+=x.lstAbs[i];
		printf("%4d",x.lstAbs[i]);
	}
	printf("%5d\n",cumul);
}
void ajouterEtudiant(classe_t *p,etudiant_t x ){
	if(p->nbE==p->taille){
		p->taille*=2;
		p->lstE=(etudiant_t*)realloc(p->lstE,p->taille*sizeof(etudiant_t));
	}	
	p->lstE[p->nbE++]=x;
}
void faireLeBilan(classe_t c){
	int i;
	printf("%5s%20s","Mtr","Nom");
	for(i=0;i<c.nbS;i++)
		printf("%2s%d","Ab",i);
	printf("Cumul\n");
	for(i=0;i<c.nbE;i++)
		afficherEtudiant(c.lstE[i],c.nbS);
}
void marquerAbsence(classe_t *p){
	int i;
	for(i=0;i<p->nbE;i++){
		printf("appel a %d %s (0->present,1->Absent)?",p->lstE[i].mtr,p->lstE[i].nom);
		scanf("%d",p->lstE[i].lstAbs[p->nbS]);
	}
	p->nbS++;
}

void chargerFilchier(char * nomFich,classe_t *p,int taille){
	FILE *pf;	
	pf=fopen(nomFich,"rb"); // fichier bianire
	if(pf){//le fichier existe deja
		fread(&p->nbS,sizeof(int),1,pf);
		fread(&p->nbE,sizeof(int),1,pf);
		fread(&p->taille,sizeof(int),1,pf);
		fread(p->lstE,sizeof(etudiant_t),p->nbE,pf);
		fclose(pf);
	}
	else{// le fichier n'existe pas encore
		*p=creerListe(taille);		
	}
}
void sauvegarder(char *nomFich,classe_t c){
	FILE *pf=fopen(nomFich,"wb"); // fichier bianire
	fwrite(&c.nbS,sizeof(int),1,pf);
	fwrite(&c.nbE,sizeof(int),1,pf);
	fwrite(&c.taille,sizeof(int),1,pf);
	fwrite(c.lstE,sizeof(etudiant_t),c.nbE,pf);
	fclose(pf);
}

int main(int argc,char * argv){
	classe_t bdcc1;
	chargerFilchier("Absence.dat",&bdcc1,10);
	do{
		
	}while(1);
	sauvegarder("Absence.dat",bdcc1);
	return 0;
}
	

