#define NB_MAX_S 28 //nbre max de seances
//types de données
typedef struct{
	int mtr;
	char nom[50];
	int lstAbs[NB_MAX_S];
}etudiant_t;

typedef struct{
	int nbS; // nbre de seances effectif
	int nbE; //nbre d'etudiants
	int taille; //nbre d'étudiants maximal
	etudiant_t *lstE; //liste dynamique d'étudiants	
}classe_t;
typedef	struct{
		int j,m,a; 
}date_t;
/*
typedef struct{
	int numS;
	int duree;
	date_t date;
}seance_t;
*/
classe_t creerListe(int );
etudiant_t lireEtudiant();
void afficherEtudiant(etudiant_t,int );// 2eme pram designe de nbre de seances
void ajouterEtudiant(classe_t *,etudiant_t );
void marquerAbsence(classe_t *);
// ou bien  classe_t ajouterEtudiant(classe_t , etudiant_t);
void faireLeBilan(classe_t);
void chargerFilchier(char *,classe_t *,int );
void sauvegarder(char *,classe_t);


