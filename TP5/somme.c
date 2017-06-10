#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int somme, i;
	for(i=0; i<argc; i++)
		somme+=atoi(argv[i]);
	printf("somme: %d\n", somme);
return 0;
}