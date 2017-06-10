#include "fap.h"
#include "memory_operations.h"
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_BUFFER 128

void aide()
{
  fprintf(stderr,"Aide :\n");
  fprintf(stderr,"Saisir l'une des commandes suivantes\n");
  fprintf(stderr,"\n");
  fprintf(stderr,"i nombre priorite  :   inserer un nombre avec sa priorite\n");
  fprintf(stderr,"e                  :   extraire le nombre de priorite maximale\n");
  fprintf(stderr,"v                  :   teste si la fap est vide\n");
  fprintf(stderr,"h                  :   afficher cette aide\n");
  fprintf(stderr,"q                  :   quitter ce programme\n");
}

int main()
{
  char buffer[TAILLE_BUFFER];
  int commande;
  int nombre,priorite,fini=0;
  fap f;

  f = creer_fap_vide();
  aide();
  while (!fini)
    {
      commande = getchar();
      if (commande == EOF)
	commande = 'q';
      switch (commande)
        {
        case 'i':
          scanf ("%d",&nombre);
          scanf ("%d",&priorite);
          f = inserer(f,nombre,priorite);
          printf("(%d,%d) a ete insere\n",nombre,priorite);
          break;
        case 'e':
          if (!est_fap_vide(f))
            {
              f = extraire(f,&nombre,&priorite);
              printf("(%d,%d) a ete extrait\n",nombre,priorite);
            }
          else
              printf("La fap est vide !\n");
          break;
        case 'v':
          printf("Est_fap_vide a retourne %d\n",est_fap_vide(f));
          break;
        case 'h':
          aide();
          break;
        case 'q':
          detruire_fap(f);
          printf("Malloc = %d Free: %d", malloc_counter, free_counter);
          exit(0);
	  fini = 1;
          break;
        default:
          fprintf(stderr,"Commande inconnue !\n");
        }
      /* vide ce qu'il reste de la ligne dans le buffer d'entree */
      fgets(buffer,TAILLE_BUFFER,stdin);
    }
  return 0;
}