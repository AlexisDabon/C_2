#include <stdio.h>

int main () {

float prix;
float total = 0;

do { 
	printf ("entrez le prix de l'article : \n");
	scanf ("%f", &prix);

if (prix < 0) {
	printf ("prix invalide \n");
}

else {
	total += prix;
}

} while (prix != 0); 

printf ("montant total à payer : %.2f \n", total);

return 0;

}
