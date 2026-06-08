#include <stdio.h> 

int main () {

int codes;
int essaies = 0;

while (1) {
	printf ("entrez le code : \n");
	scanf ("%d", &codes);

	if ( codes == 1234 ) {
		break;
	}
	else {
		printf ("accès refusé \n");
		essaies++;
	}
}

printf ("Accès accordé ! Erreurs : %d", essaies);

return 0;

}
