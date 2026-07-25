#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define CODE_SECRET 1234
#define MAX_ESSAIS 3

void vider_buffer(void) {
	int c;
	do {
	c = getchar();
	} while (c != '\n' && c != EOF);
}

int code_securise(void) {
	int code;
	printf("Tapez le code: \n");
	
	int retour = scanf("%d", &code);
	vider_buffer();

	if (retour == 1) {
		return code;
	} else {
		return - 1;
	}
}

bool verif_code(int code_saisis, int code_secret) {
	if (code_saisis == code_secret) {
		return true;
	} else {
		return false;
	}
}

int main(void) {
	int nb_erreurs = 0;
	bool acces = false;
	
	printf("\n === CONTROLE ACCES === \n");

	while (nb_erreurs < MAX_ESSAIS && !acces) {
		int code_saisis = code_securise();
		if (verif_code (code_saisis, CODE_SECRET)) {
			acces = true;
		} else {
			nb_erreurs++;
			printf("Veuillez saisir le code correct \n");
		}
	}

	if (acces) {
		printf("ACCES AUTORISE \n");
		return EXIT_SUCCESS;
	} else {
		printf("ERREUR \n");
		return EXIT_FAILURE;
	}
}
