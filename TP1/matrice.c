#include "matrice.h"
#include <stdlib.h>
#include <stdio.h>

matrice allouer_matrice(int l, int c)
{
  matrice m = {0, 0, NULL};
  int i;
  m.l = l; 
  m.c = c;
  m.donnees = (double**) malloc(l*sizeof(double*));
  if(m.donnees == NULL){
    printf("erreur malloc : m.donnees" );
    exit(0);
  }
  for (i=0; i<l; i++){
    m.donnees[i] = (double*) malloc(c*sizeof(double));
    if (m.donnees[i] == NULL){
      printf("erreur malloc m.donnees[i]");
      exit(0);
    }
  }

  return m;
}

void liberer_matrice(matrice m)
{
  int i;
  for (i=0; i<m.l; i++)
    free(m.donnees[i]);
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
  if (i<m.l && j < m.c)
    resultat = &m.donnees[i][j];
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
