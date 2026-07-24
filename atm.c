#include <stdio.h>
#define CODE_CORRECT 1234

int main () {
int choix, montant, solde = 500, code;

	for (int e = 0; e < 3; e++) {
	printf("ENTREZ CODE: \n");
	scanf("%d", &code);

	if (code == CODE_CORRECT) {
		printf("Accès autorisé \n");
		break;
		}

	printf("ERREUR \n");
	if (e == 2) {
		printf("Accès bloqué \n");
		return 0;
		}
	}


	
		
