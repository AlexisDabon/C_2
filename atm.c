#include <stdio.h>
#define CODE_CORRECT 1234

int main () {
int choix, montant, solde = 500;
int code, erreurs = 0;

	while (erreurs < 3) {
		printf("entrez votre code : \n");
		scanf("%d", &code);
		
	if (code == CODE_CORRECT) {
		printf("Accès autorisé ! \n");
		break;
	}
	else {
		erreurs++;
		printf("erreurs !");
	}
	}

	if (erreurs == 3) {
		printf("bloqué ! \n");
		return 0;
	}


		
