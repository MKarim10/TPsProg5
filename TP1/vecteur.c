#include "vecteur.h"
#include <stdlib.h>
#include <stdio.h>

vecteur allouer_vecteur(int taille)
{
  vecteur v = {0, NULL};
  v.taille = taille;
  v.donnees = (double*) malloc(taille * sizeof (double*));
  if(v.donnees == NULL){
  	printf("Erreur allocation");
  	exit(0);
  }
  return v;
}

void liberer_vecteur(vecteur v)
{
	free(v.donnees);
}

int est_vecteur_invalide(vecteur v)
{
  int resultat = 0;
  if(v.taille == -1)
  	resultat = 1;
  return resultat;
}

double *acces_vecteur(vecteur v, int i)
{
  double *resultat = NULL;
  if(i<v.taille)
  	resultat = v.donnees+i;
  return resultat;
}

int taille_vecteur(vecteur v)
{
  int resultat = v.taille;
  return resultat;
}
