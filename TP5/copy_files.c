#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	char c;

	if(argc<1){
		printf("Entrez des fichiers en argument.. Abandon\n");
		exit(0);
	}
	else{
		FILE *fichier_source, *fichier_dest;
		fichier_source=fopen(argv[1], "r");
		if(fichier_source==NULL){
			fprintf(stderr, "Erreur ouverture fichier en lecture..Abandon\n");
			exit(1);
		}
		else{
			fichier_dest=fopen(argv[2], "w");
			if(fichier_dest==NULL){
				fprintf(stderr, "Erreur ouverture fichier en écriture..Abandon\n");
				exit(1);
			}
			else{
				c = fgetc(fichier_source);
				while(!feof(fichier_source)){
					fprintf(fichier_dest, "%c",c );
					c = fgetc(fichier_source);
				}
				fclose(fichier_source);
				fclose(fichier_dest);	
			}
			
		}
	}
return 0;
}