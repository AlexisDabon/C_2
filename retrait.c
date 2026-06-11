#include <stdio.h> 

#define CODE_CORRECT 1234
#define SOLDE_INITIAL 500

int main () {
	int code;
	int erreur = 0;
	int montant; 

while (erreur < 3) {
	printf("entrez votre code : \n");
	scanf("%d", &code);

if (code == CODE_CORRECT) {
	break;
	}

else { 
	erreur++;
	printf("erreur : %d / 3 \n", erreur);
	}
}

if (erreur == 3) {
	printf("compte bloqué ! \n");
	return 1;
	}

else {
	printf("solde actuel : %d \n", SOLDE_INITIAL);
	printf("combien voulez vous retirer ? \n");
	scanf("%d", &montant);
	
if (montant <= SOLDE_INITIAL) {
	printf("retrait accordé ! \n");
	printf("solde actuel %d \n", SOLDE_INITIAL - montant);
	}
else {
	printf("solde insuffisant \n");
	}
}

return 0;

}
