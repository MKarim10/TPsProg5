#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]){
	FILE* fichier;
	char c;
	int compteur=0;

	if(argc == 1 || (argc==2 && strcmp(argv[1], "-")==0) ){
		fichier = stdin;
	}
	else{
		fichier=fopen(argv[1], "r");
		if(fichier == NULL){
			fprintf(stderr, "Erreur d'ouverture du fichier en lecture");
			exit(1);
		}
	}
	c = fgetc(fichier);
	while(!feof(fichier)){
		if(c==' '||c=='\t'||c=='.'||c==','||c==';'||c=='\n'||c==':')
			compteur++;
		c = fgetc(fichier);
	}
	printf("Nombre de mots tapés: %d\n",compteur);
return 0;
}