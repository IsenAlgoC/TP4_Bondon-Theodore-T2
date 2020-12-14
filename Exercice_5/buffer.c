#include <stdlib.h>
#include <stdio.h>

int main() {
	char phrase[1024];
	int nbMots = 0, longueurMots = 0, espace = 0;
	float moyenne = 0;
	printf("Rentrez votre phrase (1023 caractere max): ");
	gets_s(phrase, _countof(phrase));
	for (int i = 0; i < 1024; i++) {
		if (phrase[i] != '\0') {
			if (phrase[i] == ' ') {
				if (espace == 0) {
					nbMots++;
					moyenne = moyenne + longueurMots;
					longueurMots = 0;
					espace = 1;
				}
			}
			else {
				espace = 0;
				longueurMots++;
			}
		}
		else {
			nbMots++;
			moyenne = moyenne + longueurMots;
			i = 1024;
		}
	}
	moyenne = moyenne / nbMots;
	printf("\nIl y a %d mots dans la phrase '%s'", nbMots, phrase);
	printf("\nLes mots contiennent %.2f lettres en moyenne", moyenne);
}