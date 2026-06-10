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
