#include <stdio.h>

int est_separateur(char c)
{
  char separateur[]=" \t\n.,:;!?";
  int i=0;

  while ((separateur[i]!='\0') && (separateur[i]!=c))
      i++;
  if (separateur[i]!='\0')
      return 1;
  else
      return 0;
}

int main()
{
  enum {MOT, SEPARATEUR} etat;
  char c;
  int compteur;

  etat = SEPARATEUR;
  compteur = 0;
  c = getchar();
  while (c != EOF)
    {
      switch (etat)
        {
        case MOT:
          if (est_separateur(c))
              etat = SEPARATEUR;
          break;
        case SEPARATEUR:
          if (!est_separateur(c))
            {
              etat = MOT;
              compteur++;
            }
          break;
        }
      c = getchar();
    }
  printf("Nombre de mots : %d\n", compteur);
  return 0;
}