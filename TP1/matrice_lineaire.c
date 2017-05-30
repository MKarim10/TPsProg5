#include "matrice_lineaire.h"
#include <stdlib.h>
#include <stdio.h>

matrice allouer_matrice(int l, int c)
{
  matrice m = {0, 0, NULL};
  m.l = l; 
  m.c = c; 
  m.donnees = (double*)malloc(l*c*sizeof(double));
  if(m.donnees == NULL){
    printf("Erreur malloc matrice lineaire");
    exit(0);
  }
  return m;
}

void liberer_matrice(matrice m)
{
  if(m.donnees != NULL)
    free(m.donnees);
}

int est_matrice_invalide(matrice m)
{
  int resultat = 0;
  resultat = (m.l == -1 || m.c == -1);
  return resultat;
}

double *acces_matrice(matrice m, int i, int j)
{
  double *resultat = NULL;
  if (i<m.l && j<m.c)
    resultat = m.donnees +  i*m.c + j;
  return resultat;
}

int nb_lignes_matrice(matrice m)
{
  int resultat = m.l;
  return resultat;
}

int nb_colonnes_matrice(matrice m)
{
  int resultat = m.c;
  return resultat;
}
