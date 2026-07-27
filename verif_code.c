#include <stdio.h>

int main () {

	int code;
	int erreur = 0;

	while (erreur < 3) {
	
	printf("Entrez votre code : \n");
	scanf("%d", &code);
	
	if (code == 1234) {
		break;
	} else {
		erreur++;
		printf("Erreur %d / 3 \n", erreur);
		}
	}

	if (erreur == 3) {
		printf("Accès refusé \n");
	} else { 
		printf("Accès autorisé \n");
	}

	return 0;
}
