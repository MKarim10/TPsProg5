#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

extern char **environ;

int main(int argc, char *argv[]){
	
	int i=0;
	int size=0;

	char *args = "";
	for(i=0; i<argc; i++){
		size+=strlen(argv[i]);
	}

	args = (char *) malloc(size*sizeof(char));
	if(args != NULL){
		strcpy(args, "");
		i=1;
		while(i<argc){
			strcat(args, argv[i]);
			if(i<argc-1)
				strcat(args, " ");
			i++;
		}
		setenv("ARGUMENTS", args, 1);
		free(args);
	}
	else{
		printf("Erreur d'allocation\n");
		exit(0);
	}

	char* env = *environ;
	while(env != NULL){
		printf("%s\n", env);
		env = *environ++;
	}
return 0;
}
