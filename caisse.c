#include <stdio.h>

int main () {

float prix;
float total = 0;

do { 
	printf ("entrez le prix de l'article :");
	scanf ("%f", &prix);

if (prix < 0) {
	printf ("prix invalide");
}

else {
	total += prix;
}

} while (prix =! 0); 


}
