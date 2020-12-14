#include <stdlib.h>
#include <stdio.h>

int main(){
	char mot[20];
	char motdebase[20];
	int taille,rep=1;
	printf("Rentrez votre mot (19 lettres max) :");
	scanf_s("%s", mot, _countof(mot));
	taille = strlen(mot);

	for (int i = 0; i < taille; i++) {
		if (mot[i] < 'A' || mot[i]>'Z' && mot[i] < 'a' || mot[i]>'z') {
			for (int k = i; k < taille; k++) {
				mot[k] = mot[k + 1];
			}
			taille--;
			i--;
		}
	}
	strcpy(motdebase, mot);
	
	//on remplace les majuscules par des minuscules 
	for (int i = 0; i < taille; i++) {            
		if (mot[i] >= 'A' && mot[i] <= 'Z') {
			mot[i] = mot[i] + 32;
		}
	}

	//test de la symétrie des lettres 
	for (int i = 0; i < (taille / 2); i++) {
		if (mot[i] != mot[taille - 1 - i]) {
			 rep = 0;
		}
	}

	//affichage du résultat 
	if (rep == 1) {
		printf("\nLe mot %s est un palindrome", motdebase );
	}
	else {
		printf("\nLe mot %s n'est pas un palindrome", motdebase);
	}
}