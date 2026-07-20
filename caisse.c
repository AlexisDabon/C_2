#include <stdio.h>
#define EXIT_VALUE 0

int main(void) {
	
	float prix;
	float total = 0;

	do { 
		printf("Entrez le prix de l'article (0 pour terminer): \n");
	if (scanf("%f", &prix) != 1) {
		break;
		}
	if (prix > 0) {
		total += prix;
		}
	} while (prix != EXIT_VALUE); 
	
	printf("Le total est de: %.2f \n", total);
	return 0;
}


