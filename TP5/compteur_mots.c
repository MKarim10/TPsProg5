#include <stdio.h>

int main(int argc, char* argv[]){
	int compteur=0;
	char c=' ';
	while(c!=EOF){
		c = getchar();
		if(c==' '||c=='\t'||c=='.'||c==','||c==';'||c=='\n')
			compteur++;
	}
	printf("Nombre de mots tapés: %d\n",compteur);

return 0;
}