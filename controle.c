#include <stdio.h> 

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
	
