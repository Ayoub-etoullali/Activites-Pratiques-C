#include "FonctionsScalaires.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double sinusoideAmortie(double x, double mu, double f)
{
	return exp(-(pow(x, 2) / mu)) * sin(f * x);
}

double enveloppeSup(double x, double mu)
{
	return exp(-(pow(x, 2) / mu));
}
//...
// type pointeur sur une fonction scalaire
table_t getTable(fctPtr_t pf, double a, double b, int n)
{
	int *p = malloc(a * sizeof(double));
	
}

void afficherTable(const table_t *pt)
{
}
void tracerTable(const table_t *tabPtrTab[], int n)
{
}
