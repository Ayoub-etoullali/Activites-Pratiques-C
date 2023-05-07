#ifndef _FONCTIONSSCALAIRES
	#define _FONCTIONSSCALAIRES
	//types de donnees
	//type point (x,y)
	typedef struct {
		double x,y;
	}point_t;

	//type table d'une fontion scalaire
	/*
			x   |   f(x)
			... |   ...
			... |   ...
	*/
	typedef struct {
		int n;
		point_t *list;
		point_t ptMax,ptMin;// deux points extremums servant pour la mise a echelle
	}table_t;

	// list des fonctions scalaires
	double sinusoideAmortie(double,double,double);
	double enveloppeSup(double,double);
	//...

	//type pointeur sur une fonction scalaire
	typedef double (*fctPtr_t)(double,double,double) ;
	table_t getTable(fctPtr_t,double, double, int );
	void afficherTable(const table_t *);
	void tracerTable(const table_t *[],int);
#endif
