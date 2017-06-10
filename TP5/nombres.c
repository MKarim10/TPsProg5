#include <stdio.h>

int main()
{
  double valeur;

  scanf("%lg", &valeur);
  while (valeur != 0)
    {
      printf("%20lg\n",valeur);
      scanf(" %lg", &valeur);
    }
  return 0;
}