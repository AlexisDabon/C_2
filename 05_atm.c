#include <stdio.h>
#define CODE_CORRECT 1234

int main () {
int choix, montant, solde = 500, code;

	for (int e = 0; e < 3; e++) {
	printf("ENTREZ CODE: \n");
	
	if (scanf("%d", &code) != 1) {
		code = 0;
		while (getchar() != '\n');
	}

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

	do {
	printf("\n 1.Solde 2.Retrait 3.Dépôt 4.Quitter \n Choix:");

	if(scanf("%d", &choix) != 1) {
		choix = 0;
		while (getchar() != '\n');
	}

	switch (choix) {
	case 1: printf("Solde actuel: %d e \n", solde);
		break;
	case 2: printf("Montant retrait: \n"); scanf("%d", &montant);
		(montant <= solde) ? solde -= montant, printf("Nouveau solde: %d e \n", solde) : printf("Solde inssufisant \n"); 
		break;
	case 3: printf("Nouveau dépôt: \n"); scanf("%d", &montant);
		printf("Nouveau solde: %d \n", solde += montant);
		break;
	case 4: printf("Au revoir \n");
		break;
	default: printf("choix invalide \n");
		}
	} while (choix != 4);

	return 0;
}	
