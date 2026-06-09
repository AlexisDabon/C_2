#include <stdio.h>

int main () {

int code;
int erreur = 0;

while (erreur < 3) {
	
	printf("entrez votre code : \n");
	scanf("%d", &code);
	
	if (code == 1234) {
		break;
	}
	
	else {
		erreur++;
		printf("erreur %d / 3 \n", erreur);
	}
}
