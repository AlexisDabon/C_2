#include <stdio.h>
#define EXIT_VALUE 0

void vider_tampon(void) {
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
	
	float prix;
	float total = 0;
	int compteur = 0; 

	do { 
		printf("Entrez le prix de l'article (0 pour terminer le programme): \n");
		if (scanf("%f", &prix) != 1) {
		printf("Erreur veuillez entrer un nombre valide \n");
		vider_tampon();
		continue;
		}
	
	if (prix < 0) {
		printf("Erreur le prix ne peut pas être négatif \n");
		} else if (prix > 0) {
		total += prix;
		compteur++;
		}

	} while (prix != EXIT_VALUE);
	
		printf("\n--- Résumé final ---\n");	
		printf("Nombre d'articles : %d\n", compteur);
		printf("Prix total : %.2f €\n", total);

	return 0;
}
