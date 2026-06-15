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
	
	do {
		printf("1.solde 2.retrait 3.Dépôt 4.quitter \n choix:");
		scanf("%d", &choix);
		
		switch (choix) {
			case 1 :
				printf("solde : %d \n", solde);
				break;
			case 2 :
				printf("montant à retirer : \n");
				scanf("%d", &montant);
				if (montant <= solde) {
					solde -= montant;
					printf("retrait de : %d . nouveau solde : %d \n", montant, solde);
				}
				else {
					printf("solde insuffisant \n");
				}
				break;
			case 3 :
				printf("montant à déposer : \n");
				scanf("%d", &montant);
				solde += montant;
				printf("dépôt de : %d . nouveau solde : %d \n", montant, solde);
				break;
			case 4 :
				printf("au revoir \n");
				break;
			default : printf("invalide \n");
				break;
				}
	} while (choix !=4);

	return 0;
}


	
		
