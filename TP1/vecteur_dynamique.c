#include "vecteur_dynamique.h"
#include <stdlib.h>

vecteur allouer_vecteur(int taille)
{
  vecteur v = NULL;
  v = malloc(sizeof(struct donnees_vecteur));
  v->taille = taille;
  v->donnees = (double*) malloc (taille * sizeof(double));
  if (v->donnees == NULL)
  	exit(0);
  return v;
}

void liberer_vecteur(vecteur v)
{
	free(v->donnees);
	free(v);
}

int est_vecteur_invalide(vecteur v)
{
  int resultat = 0;
  if(v->taille == -1)
  		resultat = 1;
  return resultat;
}

double *acces_vecteur(vecteur v, int i)
{
  double *resultat = NULL;
  if (i < 0)
  		return resultat;
  else if(i < v->taille)
  		resultat = v->donnees+i;
  else{
  		v->donnees = (double*) realloc(v->donnees,(v->taille +2*i)* sizeof(double));
  		if (v->donnees == NULL)
  			exit(0);
  		else
  			resultat = &(v->donnees[i]);
  }	
  return resultat;
}

int taille_vecteur(vecteur v)
{
  int resultat = v->taille;
  return resultat;
}
